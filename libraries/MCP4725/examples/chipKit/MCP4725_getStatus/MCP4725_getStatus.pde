// MCP4725_getStatus 
// Copyright (C)2015 Rinky-Dink Electronics, Henning Karlsen. All right reserved
// web: http://www.RinkyDinkElectronics.com/
//
// A quick demo of how to use my MCP4725-library to get the current and
// startup status from the MCP4725 DAC chip. The output is sent to the
// serial monitor with a default baud rate of 115200.
//
// To use the hardware I2C (TWI) interface of the chipKit you must connect
// the pins as follows:
//
// Arduino Uno32/uC32:
// ----------------------
// MCP4725:  SDA pin   -> Arduino Analog 4 (Digital 18)
//           SCL pin   -> Arduino Analog 5 (Digital 19)
// *** Remember that you will have to set JP6 and JP8 in the correct position
//
// Arduino Max32:
// ----------------------
// MCP4725:  SDA pin   -> Arduino Digital 20 (SDA)
//           SCL pin   -> Arduino Digital 21 (SCL)
//
// The PIC32 microcontroller does not have internal pull-up resistors so you 
// must use appropriate, external pull-up resistors on the data and clock 
// signals.
//
// You can connect the MCP4725 to any available pin but if you use any
// other than what is described above the library will fall back to
// a software-based, TWI-like protocol which will require exclusive access 
// to the pins used, and you will also have to use appropriate, external
// pull-up resistors on the data and clock signals.
//

#include <MCP4725.h>

MCP4725 dac(SDA, SCL);

MCP4725_Status  s;

void setup(void) 
{
  Serial.begin(115200);
  dac.begin();
}

void loop(void) 
{
  Serial.println("--> Start...");
  Serial.println("--> Status is not checked yet so it should be unknown...");
  printStatus();
  delay(1000);
  Serial.println("--> Set voltage to maximum");
  dac.setVoltage(MAX_VOLTAGE);
  s = dac.getStatus();
  printStatus();
  delay(1000);
  Serial.println("--> Set Powerdown...");
  dac.setPowerDown(MCP4725_POWERDOWN_500K);
  s = dac.getStatus();
  printStatus();
  delay(1000);
  Serial.println("--> Set Powerdown off (enable output)...");
  dac.setPowerDown(MCP4725_POWERDOWN_OFF);
  s = dac.getStatus();
  printStatus();
  delay(1000);
  Serial.println("--> Set value to default startup value...");
  dac.setValue(s.startupValue);
  s = dac.getStatus();
  printStatus();
  
  while (1) {};
}

// Support functions
// -----------------
void printStatus()
{
  Serial.println("Current status...");
  Serial.println("\t--------------------------------");
  Serial.print("\tCurrent value: ");
  hexPrintWord(s.currentValue);
  Serial.print("\tCurrent voltage: ");
  Serial.println(s.currentVoltage);
  Serial.print("\tCurrent power-down mode: ");
  switch (s.currentPowerState)
  {
    case MCP4725_POWERDOWN_OFF:
        Serial.println("Power normal");
        break;
    case MCP4725_POWERDOWN_1K:
        Serial.println("1K resistor to ground");
        break;
    case MCP4725_POWERDOWN_100K:
        Serial.println("100K resistor to ground");
        break;
    case MCP4725_POWERDOWN_500K:
        Serial.println("500K resistor to ground");
        break;
    case MCP4725_POWERDOWN_UNK:
        Serial.println("State Unknown");
        break;
  }
  Serial.println("\t--------------------------------");
  Serial.print("\tStartup value: ");
  hexPrintWord(s.startupValue);
  Serial.print("\tStartup power-down mode: ");
  switch (s.startupPowerState)
  {
    case MCP4725_POWERDOWN_OFF:
        Serial.println("Power normal");
        break;
    case MCP4725_POWERDOWN_1K:
        Serial.println("1K resistor to ground");
        break;
    case MCP4725_POWERDOWN_100K:
        Serial.println("100K resistor to ground");
        break;
    case MCP4725_POWERDOWN_500K:
        Serial.println("500K resistor to ground");
        break;
    case MCP4725_POWERDOWN_UNK:
        Serial.println("State Unknown");
        break;
  }
  Serial.println("\t--------------------------------");
}

void hexPrintWord(word val)
{
  Serial.print("0x");
  if (val < 0x1000)
    Serial.print("0");
  if (val < 0x100)
    Serial.print("0");
  if (val < 0x10)
    Serial.print("0");
  Serial.print(val, HEX);
  Serial.print(" [");
  Serial.print(val, DEC);
  Serial.println("] ");
}


