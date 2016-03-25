#if defined(__AVR__)
	#include <avr/pgmspace.h>
	#define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#elif defined(__arm__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#endif

fontdatatype SmallFont[] PROGMEM =
{
0x06, 0x08, 0x20, 0x5f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // sp
0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,   // !
0x00, 0x00, 0x07, 0x00, 0x07, 0x00,   // "
0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,   // #
0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,   // $
0x00, 0x23, 0x13, 0x08, 0x64, 0x62,   // %
0x00, 0x36, 0x49, 0x55, 0x22, 0x50,   // &
0x00, 0x00, 0x05, 0x03, 0x00, 0x00,   // '
0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,   // (
0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,   // )
0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,   // *
0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,   // +
0x00, 0x00, 0x00, 0xA0, 0x60, 0x00,   // ,
0x00, 0x08, 0x08, 0x08, 0x08, 0x08,   // -
0x00, 0x00, 0x60, 0x60, 0x00, 0x00,   // .
0x00, 0x20, 0x10, 0x08, 0x04, 0x02,   // /

0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,   // 0
0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,   // 1
0x00, 0x42, 0x61, 0x51, 0x49, 0x46,   // 2
0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,   // 3
0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,   // 4
0x00, 0x27, 0x45, 0x45, 0x45, 0x39,   // 5
0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,   // 6
0x00, 0x01, 0x71, 0x09, 0x05, 0x03,   // 7
0x00, 0x36, 0x49, 0x49, 0x49, 0x36,   // 8
0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,   // 9
0x00, 0x00, 0x36, 0x36, 0x00, 0x00,   // :
0x00, 0x00, 0x56, 0x36, 0x00, 0x00,   // ;
0x00, 0x08, 0x14, 0x22, 0x41, 0x00,   // <
0x00, 0x14, 0x14, 0x14, 0x14, 0x14,   // =
0x00, 0x00, 0x41, 0x22, 0x14, 0x08,   // >
0x00, 0x02, 0x01, 0x51, 0x09, 0x06,   // ?

0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,   // @
0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,   // A
0x00, 0x7F, 0x49, 0x49, 0x49, 0x36,   // B
0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,   // C
0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C,   // D
0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,   // E
0x00, 0x7F, 0x09, 0x09, 0x09, 0x01,   // F
0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A,   // G
0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,   // H
0x00, 0x00, 0x41, 0x7F, 0x41, 0x00,   // I
0x00, 0x20, 0x40, 0x41, 0x3F, 0x01,   // J
0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,   // K
0x00, 0x7F, 0x40, 0x40, 0x40, 0x40,   // L
0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F,   // M
0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F,   // N
0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,   // O

0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,   // P
0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E,   // Q
0x00, 0x7F, 0x09, 0x19, 0x29, 0x46,   // R
0x00, 0x46, 0x49, 0x49, 0x49, 0x31,   // S
0x00, 0x01, 0x01, 0x7F, 0x01, 0x01,   // T
0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F,   // U
0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F,   // V
0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F,   // W
0x00, 0x63, 0x14, 0x08, 0x14, 0x63,   // X
0x00, 0x07, 0x08, 0x70, 0x08, 0x07,   // Y
0x00, 0x61, 0x51, 0x49, 0x45, 0x43,   // Z
0x00, 0x00, 0x7F, 0x41, 0x41, 0x00,   // [
0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55,   // Backslash (Checker pattern)
0x00, 0x00, 0x41, 0x41, 0x7F, 0x00,   // ]
0x00, 0x04, 0x02, 0x01, 0x02, 0x04,   // ^
0x00, 0x40, 0x40, 0x40, 0x40, 0x40,   // _

0x00, 0x00, 0x03, 0x05, 0x00, 0x00,   // `
0x00, 0x20, 0x54, 0x54, 0x54, 0x78,   // a
0x00, 0x7F, 0x48, 0x44, 0x44, 0x38,   // b
0x00, 0x38, 0x44, 0x44, 0x44, 0x20,   // c
0x00, 0x38, 0x44, 0x44, 0x48, 0x7F,   // d
0x00, 0x38, 0x54, 0x54, 0x54, 0x18,   // e
0x00, 0x08, 0x7E, 0x09, 0x01, 0x02,   // f
0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C,   // g
0x00, 0x7F, 0x08, 0x04, 0x04, 0x78,   // h
0x00, 0x00, 0x44, 0x7D, 0x40, 0x00,   // i
0x00, 0x40, 0x80, 0x84, 0x7D, 0x00,   // j
0x00, 0x7F, 0x10, 0x28, 0x44, 0x00,   // k
0x00, 0x00, 0x41, 0x7F, 0x40, 0x00,   // l
0x00, 0x7C, 0x04, 0x18, 0x04, 0x78,   // m
0x00, 0x7C, 0x08, 0x04, 0x04, 0x78,   // n
0x00, 0x38, 0x44, 0x44, 0x44, 0x38,   // o

0x00, 0xFC, 0x24, 0x24, 0x24, 0x18,   // p
0x00, 0x18, 0x24, 0x24, 0x18, 0xFC,   // q
0x00, 0x7C, 0x08, 0x04, 0x04, 0x08,   // r
0x00, 0x48, 0x54, 0x54, 0x54, 0x20,   // s
0x00, 0x04, 0x3F, 0x44, 0x40, 0x20,   // t
0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C,   // u
0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C,   // v
0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C,   // w
0x00, 0x44, 0x28, 0x10, 0x28, 0x44,   // x
0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C,   // y
0x00, 0x44, 0x64, 0x54, 0x4C, 0x44,   // z
0x00, 0x00, 0x10, 0x7C, 0x82, 0x00,   // {
0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,   // |
0x00, 0x00, 0x82, 0x7C, 0x10, 0x00,   // }
0x00, 0x00, 0x06, 0x09, 0x09, 0x06    // ~ (Degrees)
};

fontdatatype WideFont[] PROGMEM={
0x08,0x08,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x00,0x00,0x5F,0x00,0x00,0x00,  // !
0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x00,  // "
0x00,0x24,0x7E,0x24,0x24,0x7E,0x24,0x00,  // #
0x00,0x2E,0x2A,0x7F,0x2A,0x3A,0x00,0x00,  // $
0x00,0x46,0x26,0x10,0x08,0x64,0x62,0x00,  // %
0x00,0x20,0x54,0x4A,0x54,0x20,0x50,0x00,  // &
0x00,0x00,0x00,0x04,0x02,0x00,0x00,0x00,  // '
0x00,0x00,0x00,0x3C,0x42,0x00,0x00,0x00,  // (
0x00,0x00,0x00,0x42,0x3C,0x00,0x00,0x00,  // )
0x00,0x10,0x54,0x38,0x54,0x10,0x00,0x00,  // *
0x00,0x10,0x10,0x7C,0x10,0x10,0x00,0x00,  // +
0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,  // ,
0x00,0x10,0x10,0x10,0x10,0x10,0x00,0x00,  // -
0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,  // .
0x00,0x40,0x20,0x10,0x08,0x04,0x00,0x00,  // /

0x3C,0x62,0x52,0x4A,0x46,0x3C,0x00,0x00,  // 0
0x44,0x42,0x7E,0x40,0x40,0x00,0x00,0x00,  // 1
0x64,0x52,0x52,0x52,0x52,0x4C,0x00,0x00,  // 2
0x24,0x42,0x42,0x4A,0x4A,0x34,0x00,0x00,  // 3
0x30,0x28,0x24,0x7E,0x20,0x20,0x00,0x00,  // 4
0x2E,0x4A,0x4A,0x4A,0x4A,0x32,0x00,0x00,  // 5
0x3C,0x4A,0x4A,0x4A,0x4A,0x30,0x00,0x00,  // 6
0x02,0x02,0x62,0x12,0x0A,0x06,0x00,0x00,  // 7
0x34,0x4A,0x4A,0x4A,0x4A,0x34,0x00,0x00,  // 8
0x0C,0x52,0x52,0x52,0x52,0x3C,0x00,0x00,  // 9
0x00,0x00,0x00,0x48,0x00,0x00,0x00,0x00,  // :
0x00,0x00,0x80,0x64,0x00,0x00,0x00,0x00,  // ;
0x00,0x00,0x10,0x28,0x44,0x00,0x00,0x00,  // <
0x00,0x28,0x28,0x28,0x28,0x28,0x00,0x00,  // =
0x00,0x00,0x44,0x28,0x10,0x00,0x00,0x00,  // >
0x00,0x04,0x02,0x02,0x52,0x0A,0x04,0x00,  // ?

0x00,0x3C,0x42,0x5A,0x56,0x5A,0x1C,0x00,  // @
0x7C,0x12,0x12,0x12,0x12,0x7C,0x00,0x00,  // A
0x7E,0x4A,0x4A,0x4A,0x4A,0x34,0x00,0x00,  // B
0x3C,0x42,0x42,0x42,0x42,0x24,0x00,0x00,  // C
0x7E,0x42,0x42,0x42,0x24,0x18,0x00,0x00,  // D
0x7E,0x4A,0x4A,0x4A,0x4A,0x42,0x00,0x00,  // E
0x7E,0x0A,0x0A,0x0A,0x0A,0x02,0x00,0x00,  // F
0x3C,0x42,0x42,0x52,0x52,0x34,0x00,0x00,  // G
0x7E,0x08,0x08,0x08,0x08,0x7E,0x00,0x00,  // H
0x00,0x42,0x42,0x7E,0x42,0x42,0x00,0x00,  // I
0x30,0x40,0x40,0x40,0x40,0x3E,0x00,0x00,  // J
0x7E,0x08,0x08,0x14,0x22,0x40,0x00,0x00,  // K
0x7E,0x40,0x40,0x40,0x40,0x40,0x00,0x00,  // L
0x7E,0x04,0x08,0x08,0x04,0x7E,0x00,0x00,  // M
0x7E,0x04,0x08,0x10,0x20,0x7E,0x00,0x00,  // N
0x3C,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,  // O

0x7E,0x12,0x12,0x12,0x12,0x0C,0x00,0x00,  // P
0x3C,0x42,0x52,0x62,0x42,0x3C,0x00,0x00,  // Q
0x7E,0x12,0x12,0x12,0x32,0x4C,0x00,0x00,  // R
0x24,0x4A,0x4A,0x4A,0x4A,0x30,0x00,0x00,  // S
0x02,0x02,0x02,0x7E,0x02,0x02,0x02,0x00,  // T
0x3E,0x40,0x40,0x40,0x40,0x3E,0x00,0x00,  // U
0x1E,0x20,0x40,0x40,0x20,0x1E,0x00,0x00,  // V
0x3E,0x40,0x20,0x20,0x40,0x3E,0x00,0x00,  // W
0x42,0x24,0x18,0x18,0x24,0x42,0x00,0x00,  // X
0x02,0x04,0x08,0x70,0x08,0x04,0x02,0x00,  // Y
0x42,0x62,0x52,0x4A,0x46,0x42,0x00,0x00,  // Z
0x00,0x00,0x7E,0x42,0x42,0x00,0x00,0x00,  // [
0x00,0x04,0x08,0x10,0x20,0x40,0x00,0x00,  // <backslash>
0x00,0x00,0x42,0x42,0x7E,0x00,0x00,0x00,  // ]
0x00,0x08,0x04,0x7E,0x04,0x08,0x00,0x00,  // ^
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,  // _

0x3C,0x42,0x99,0xA5,0xA5,0x81,0x42,0x3C,  // `
0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00,  // a
0x00,0x7E,0x48,0x48,0x48,0x30,0x00,0x00,  // b
0x00,0x00,0x38,0x44,0x44,0x44,0x00,0x00,  // c
0x00,0x30,0x48,0x48,0x48,0x7E,0x00,0x00,  // d
0x00,0x38,0x54,0x54,0x54,0x48,0x00,0x00,  // e
0x00,0x00,0x00,0x7C,0x0A,0x02,0x00,0x00,  // f
0x00,0x18,0xA4,0xA4,0xA4,0xA4,0x7C,0x00,  // g
0x00,0x7E,0x08,0x08,0x08,0x70,0x00,0x00,  // h
0x00,0x00,0x00,0x48,0x7A,0x40,0x00,0x00,  // i
0x00,0x00,0x40,0x80,0x80,0x7A,0x00,0x00,  // j
0x00,0x7E,0x18,0x24,0x40,0x00,0x00,0x00,  // k
0x00,0x00,0x00,0x3E,0x40,0x40,0x00,0x00,  // l
0x00,0x7C,0x04,0x78,0x04,0x78,0x00,0x00,  // m
0x00,0x7C,0x04,0x04,0x04,0x78,0x00,0x00,  // n
0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00,  // o

0x00,0xFC,0x24,0x24,0x24,0x18,0x00,0x00,  // p
0x00,0x18,0x24,0x24,0x24,0xFC,0x80,0x00,  // q
0x00,0x00,0x78,0x04,0x04,0x04,0x00,0x00,  // r
0x00,0x48,0x54,0x54,0x54,0x20,0x00,0x00,  // s
0x00,0x00,0x04,0x3E,0x44,0x40,0x00,0x00,  // t
0x00,0x3C,0x40,0x40,0x40,0x3C,0x00,0x00,  // u
0x00,0x0C,0x30,0x40,0x30,0x0C,0x00,0x00,  // v
0x00,0x3C,0x40,0x38,0x40,0x3C,0x00,0x00,  // w
0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00,  // x
0x00,0x1C,0xA0,0xA0,0xA0,0x7C,0x00,0x00,  // y
0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00,  // z
0x00,0x08,0x08,0x76,0x42,0x42,0x00,0x00,  // {
0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,  // |
0x00,0x42,0x42,0x76,0x08,0x08,0x00,0x00,  // }
0x00,0x00,0x04,0x02,0x04,0x02,0x00,0x00,  // ~
};

fontdatatype MediumNumbers[] PROGMEM =
{
0x0c, 0x10, 0x2d, 0x0d,
0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00,   // -
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00,   // .
0x00, 0x00, 0x02, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x02, 0x00, 0x00, 0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x00, 0x00,   // /
0x00, 0xfc, 0x7a, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7a, 0xfc, 0x00, 0x00, 0x7e, 0xbc, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xbc, 0x7e, 0x00,   // 0
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x7e, 0x00,   // 1
0x00, 0x00, 0x02, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00, 0x00, 0x7e, 0xbd, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x00, 0x00,   // 2
0x00, 0x00, 0x02, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00, 0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00,   // 3
0x00, 0xfc, 0x78, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x78, 0xfc, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x3d, 0x7e, 0x00,   // 4
0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x02, 0x00, 0x00, 0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00,   // 5
0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x02, 0x00, 0x00, 0x00, 0x7e, 0xbd, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00,   // 6
0x00, 0x00, 0x02, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7a, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x7e, 0x00,   // 7
0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00, 0x00, 0x7e, 0xbd, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00,   // 8
0x00, 0xfc, 0x7a, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x7a, 0xfc, 0x00, 0x00, 0x00, 0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xbd, 0x7e, 0x00,   // 9
};

fontdatatype BigNumbers[] PROGMEM =
{
0x0e, 0x18, 0x2d, 0x0d,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // -
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xe0, 0xe0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,   // .
0x00, 0x00, 0x02, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00,   // /
0x00, 0xfc, 0xfa, 0xf6, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xf6, 0xfa, 0xfc, 0x00, 0x00, 0xef, 0xc7, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xc7, 0xef, 0x00, 0x00, 0x7f, 0xbf, 0xdf, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdf, 0xbf, 0x7f, 0x00,   // 0
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf8, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xc7, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x7f, 0x00,   // 1
0x00, 0x00, 0x02, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xf6, 0xfa, 0xfc, 0x00, 0x00, 0xe0, 0xd0, 0xb8, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x3b, 0x17, 0x0f, 0x00, 0x00, 0x7f, 0xbf, 0xdf, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00,   // 2
0x00, 0x00, 0x02, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xf6, 0xfa, 0xfc, 0x00, 0x00, 0x00, 0x10, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xbb, 0xd7, 0xef, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdf, 0xbf, 0x7f, 0x00,   // 3
0x00, 0xfc, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf8, 0xfc, 0x00, 0x00, 0x0f, 0x17, 0x3b, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xbb, 0xd7, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x7f, 0x00,   // 4
0x00, 0xfc, 0xfa, 0xf6, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x17, 0x3b, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xb8, 0xd0, 0xe0, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdf, 0xbf, 0x7f, 0x00,   // 5
0x00, 0xfc, 0xfa, 0xf6, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x02, 0x00, 0x00, 0x00, 0xef, 0xd7, 0xbb, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xb8, 0xd0, 0xe0, 0x00, 0x00, 0x7f, 0xbf, 0xdf, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdf, 0xbf, 0x7f, 0x00,   // 6
0x00, 0x00, 0x02, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xf6, 0xfa, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0xc7, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3f, 0x7f, 0x00,   // 7
0x00, 0xfc, 0xfa, 0xf6, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xf6, 0xfa, 0xfc, 0x00, 0x00, 0xef, 0xd7, 0xbb, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xbb, 0xd7, 0xef, 0x00, 0x00, 0x7f, 0xbf, 0xdf, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdf, 0xbf, 0x7f, 0x00,   // 8
0x00, 0xfc, 0xfa, 0xf6, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xf6, 0xfa, 0xfc, 0x00, 0x00, 0x0f, 0x17, 0x3b, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0xbb, 0xd7, 0xef, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdf, 0xbf, 0x7f, 0x00,   // 9
};

