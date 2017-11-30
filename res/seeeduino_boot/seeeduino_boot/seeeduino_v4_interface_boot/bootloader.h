// File =  atmega2560_bootloader.hex
// Loader start: 3E000, length: 8192
// MD5 sum = 12 AA 80 07 4D 74 E3 DA BF 2D 25 84 6D 99 F7 20
// Pfft! See: http://forum.arduino.cc/index.php?topic=204174
// Date: 15 December 2013
// Mods to bootloader by Nick Gammon

// In particular, the watchdog part of the bootloader changed to read:

/*
#include <avr/wdt.h>

...


#ifdef _FIX_ISSUE_181_
  //************************************************************************
  //* Dec 29, 2011  <MLS> Issue #181, added watch dog timmer support
  //* handle the watch dog timer
  uint8_t mcuStatusReg;
  mcuStatusReg  = MCUSR;

  __asm__ __volatile__ ("cli");
  __asm__ __volatile__ ("wdr");
  MCUSR = 0;
  WDTCSR  |=  _BV(WDCE) | _BV(WDE);
  WDTCSR  = 0;
  wdt_disable ();

  __asm__ __volatile__ ("sei");
  // check if WDT generated the reset, if so, go straight to app
  if (mcuStatusReg & _BV(WDRF))
    {

    boot_rww_enable();        // enable application section


    asm volatile(
                 "clr r30   \n\t"
                 "clr r31   \n\t"
                 "ijmp  \n\t"
                 );

    }
  //************************************************************************
#endif

*/

const byte bootloader_hex [] PROGMEM = {
 0x91, 0xC0, 0x00, 0x00, 0xAA, 0xC0, 0x00, 0x00, 0xA8, 0xC0, 0x00, 0x00, 0xA6, 0xC0, 0x00, 0x00,
  0xA4, 0xC0, 0x00, 0x00, 0xA2, 0xC0, 0x00, 0x00, 0xA0, 0xC0, 0x00, 0x00, 0x9E, 0xC0, 0x00, 0x00,
  0x9C, 0xC0, 0x00, 0x00, 0x9A, 0xC0, 0x00, 0x00, 0x98, 0xC0, 0x00, 0x00, 0xEF, 0xC3, 0x00, 0x00,
  0x94, 0xC4, 0x00, 0x00, 0x92, 0xC0, 0x00, 0x00, 0x90, 0xC0, 0x00, 0x00, 0x8E, 0xC0, 0x00, 0x00,
  0x8C, 0xC0, 0x00, 0x00, 0x8A, 0xC0, 0x00, 0x00, 0x88, 0xC0, 0x00, 0x00, 0x86, 0xC0, 0x00, 0x00,
  0x84, 0xC0, 0x00, 0x00, 0x82, 0xC0, 0x00, 0x00, 0x80, 0xC0, 0x00, 0x00, 0xB9, 0xC1, 0x00, 0x00,
  0x7C, 0xC0, 0x00, 0x00, 0x7A, 0xC0, 0x00, 0x00, 0x78, 0xC0, 0x00, 0x00, 0x76, 0xC0, 0x00, 0x00,
  0x74, 0xC0, 0x00, 0x00, 0x09, 0x05, 0x2B, 0x05, 0x15, 0x06, 0x2B, 0x05, 0x15, 0x06, 0x6D, 0x05,
  0x8A, 0x05, 0x15, 0x06, 0xDD, 0x05, 0xEF, 0x05, 0x1A, 0x03, 0x53, 0x00, 0x65, 0x00, 0x65, 0x00,
  0x65, 0x00, 0x64, 0x00, 0x75, 0x00, 0x69, 0x00, 0x6E, 0x00, 0x6F, 0x00, 0x20, 0x00, 0x76, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x2A, 0x03, 0x53, 0x00, 0x65, 0x00, 0x65, 0x00, 0x65, 0x00, 0x64, 0x00,
  0x20, 0x00, 0x28, 0x00, 0x77, 0x00, 0x77, 0x00, 0x77, 0x00, 0x2E, 0x00, 0x73, 0x00, 0x65, 0x00,
  0x65, 0x00, 0x65, 0x00, 0x64, 0x00, 0x2E, 0x00, 0x63, 0x00, 0x63, 0x00, 0x29, 0x00, 0x00, 0x00,
  0x04, 0x03, 0x09, 0x04, 0x09, 0x02, 0x3E, 0x00, 0x02, 0x01, 0x00, 0xC0, 0x32, 0x09, 0x04, 0x00,
  0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 0x05, 0x24, 0x00, 0x01, 0x10, 0x04, 0x24, 0x02, 0x06, 0x05,
  0x24, 0x06, 0x00, 0x01, 0x07, 0x05, 0x82, 0x03, 0x08, 0x00, 0xFF, 0x09, 0x04, 0x01, 0x00, 0x02,
  0x0A, 0x00, 0x00, 0x00, 0x07, 0x05, 0x04, 0x02, 0x40, 0x00, 0x01, 0x07, 0x05, 0x83, 0x02, 0x40,
  0x00, 0x01, 0x12, 0x01, 0x10, 0x01, 0x02, 0x00, 0x00, 0x08, 0x86, 0x28, 0x04, 0x00, 0x01, 0x00,
  0x01, 0x02, 0xDC, 0x01, 0x11, 0x24, 0x1F, 0xBE, 0xCF, 0xEF, 0xD2, 0xE0, 0xDE, 0xBF, 0xCD, 0xBF,
  0x11, 0xE0, 0xA0, 0xE0, 0xB1, 0xE0, 0xE4, 0xE3, 0xFF, 0xE0, 0x02, 0xC0, 0x05, 0x90, 0x0D, 0x92,
  0xA6, 0x31, 0xB1, 0x07, 0xD9, 0xF7, 0x22, 0xE0, 0xA6, 0xE1, 0xB1, 0xE0, 0x01, 0xC0, 0x1D, 0x92,
  0xAF, 0x32, 0xB2, 0x07, 0xE1, 0xF7, 0x64, 0xD0, 0xEB, 0xC6, 0x52, 0xCF, 0xFC, 0x01, 0xE0, 0x58,
  0xFF, 0x4F, 0xA0, 0x81, 0xB1, 0x81, 0x6C, 0x93, 0xA0, 0x81, 0xB1, 0x81, 0x9D, 0x01, 0x2F, 0x5F,
  0x3F, 0x4F, 0x31, 0x83, 0x20, 0x83, 0x2E, 0x17, 0x3F, 0x07, 0x21, 0xF4, 0x12, 0x96, 0x9C, 0x93,
  0x8E, 0x93, 0x11, 0x97, 0x2F, 0xB7, 0xF8, 0x94, 0xFC, 0x01, 0xEC, 0x57, 0xFF, 0x4F, 0x80, 0x81,
  0x8F, 0x5F, 0x80, 0x83, 0x2F, 0xBF, 0x08, 0x95, 0xDC, 0x01, 0xAE, 0x57, 0xBF, 0x4F, 0xED, 0x91,
  0xFC, 0x91, 0x11, 0x97, 0x41, 0x91, 0x11, 0x96, 0xFC, 0x93, 0xEE, 0x93, 0x9C, 0x01, 0x20, 0x58,
  0x3F, 0x4F, 0xE2, 0x17, 0xF3, 0x07, 0x11, 0xF4, 0x8D, 0x93, 0x9C, 0x93, 0x2F, 0xB7, 0xF8, 0x94,
  0xFC, 0x01, 0xEC, 0x57, 0xFF, 0x4F, 0x90, 0x81, 0x91, 0x50, 0x90, 0x83, 0x2F, 0xBF, 0x84, 0x2F,
  0x08, 0x95, 0x84, 0xB7, 0x87, 0x7F, 0x84, 0xBF, 0x88, 0xE1, 0x0F, 0xB6, 0xF8, 0x94, 0x80, 0x93,
  0x60, 0x00, 0x10, 0x92, 0x60, 0x00, 0x0F, 0xBE, 0x87, 0xE6, 0x90, 0xE0, 0x90, 0x93, 0xCD, 0x00,
  0x80, 0x93, 0xCC, 0x00, 0x86, 0xE0, 0x80, 0x93, 0xCA, 0x00, 0x10, 0x92, 0xC8, 0x00, 0x88, 0xE1,
  0x80, 0x93, 0xC9, 0x00, 0x53, 0x9A, 0x5A, 0x9A, 0x8A, 0xB1, 0x80, 0x63, 0x8A, 0xB9, 0x8B, 0xB1,
  0x80, 0x63, 0x8B, 0xB9, 0xF0, 0xD2, 0x84, 0xE0, 0x85, 0xBD, 0x5F, 0x9A, 0x57, 0x9A, 0x08, 0x95,
  0xD8, 0xDF, 0x2F, 0xB7, 0xF8, 0x94, 0x8E, 0xE9, 0x91, 0xE0, 0x90, 0x93, 0x1F, 0x02, 0x80, 0x93,
  0x1E, 0x02, 0x90, 0x93, 0x21, 0x02, 0x80, 0x93, 0x20, 0x02, 0x2F, 0xBF, 0x2F, 0xB7, 0xF8, 0x94,
  0x89, 0xE1, 0x91, 0xE0, 0x90, 0x93, 0x9A, 0x01, 0x80, 0x93, 0x99, 0x01, 0x90, 0x93, 0x9C, 0x01,
  0x80, 0x93, 0x9B, 0x01, 0x2F, 0xBF, 0x78, 0x94, 0xD3, 0xE0, 0x9F, 0xB7, 0xF8, 0x94, 0x80, 0x91,
  0x22, 0x02, 0x9F, 0xBF, 0x80, 0x38, 0x49, 0xF0, 0x80, 0xE0, 0x91, 0xE0, 0x0E, 0xD6, 0x97, 0xFD,
  0x04, 0xC0, 0x68, 0x2F, 0x8E, 0xE9, 0x91, 0xE0, 0x71, 0xDF, 0x8F, 0xB7, 0xF8, 0x94, 0xC0, 0x91,
  0x9D, 0x01, 0x8F, 0xBF, 0xA8, 0x99, 0x02, 0xC0, 0xC1, 0x36, 0x58, 0xF1, 0xA8, 0x9A, 0x80, 0x91,
  0x9D, 0x01, 0x88, 0x23, 0x19, 0xF0, 0x5D, 0x98, 0xD0, 0x93, 0x16, 0x01, 0xCC, 0x23, 0x49, 0xF0,
  0x89, 0xE1, 0x91, 0xE0, 0x79, 0xDF, 0x68, 0x2F, 0x80, 0xE0, 0x91, 0xE0, 0x93, 0xD5, 0xC1, 0x50,
  0xF5, 0xCF, 0x80, 0x91, 0x16, 0x01, 0x88, 0x23, 0x41, 0xF0, 0x80, 0x91, 0x16, 0x01, 0x81, 0x50,
  0x80, 0x93, 0x16, 0x01, 0x81, 0x11, 0x01, 0xC0, 0x5D, 0x9A, 0x80, 0x91, 0x17, 0x01, 0x88, 0x23,
  0x41, 0xF0, 0x80, 0x91, 0x17, 0x01, 0x81, 0x50, 0x80, 0x93, 0x17, 0x01, 0x81, 0x11, 0x01, 0xC0,
  0x5C, 0x9A, 0x9F, 0xB7, 0xF8, 0x94, 0x80, 0x91, 0x22, 0x02, 0x9F, 0xBF, 0x88, 0x23, 0x61, 0xF0,
  0x8E, 0xE9, 0x91, 0xE0, 0x51, 0xDF, 0x90, 0x91, 0xC8, 0x00, 0x95, 0xFF, 0xFC, 0xCF, 0x80, 0x93,
  0xCE, 0x00, 0x5C, 0x98, 0xD0, 0x93, 0x17, 0x01, 0x80, 0xE0, 0x91, 0xE0, 0xB0, 0xD5, 0x9A, 0xD4,
  0xA4, 0xCF, 0x80, 0xE0, 0x91, 0xE0, 0x11, 0xC5, 0x80, 0xE0, 0x91, 0xE0, 0xA5, 0xC4, 0x1F, 0x93,
  0xCF, 0x93, 0xDF, 0x93, 0xEC, 0x01, 0x8C, 0x89, 0x81, 0x30, 0x31, 0xF0, 0x82, 0x30, 0x11, 0xF0,
  0x10, 0xE0, 0x03, 0xC0, 0x10, 0xE2, 0x01, 0xC0, 0x10, 0xE3, 0x8B, 0x89, 0x82, 0x30, 0x09, 0xF4,
  0x18, 0x60, 0x8D, 0x89, 0x87, 0x30, 0x31, 0xF0, 0x88, 0x30, 0x31, 0xF0, 0x86, 0x30, 0x29, 0xF4,
  0x12, 0x60, 0x03, 0xC0, 0x14, 0x60, 0x01, 0xC0, 0x16, 0x60, 0x10, 0x92, 0xC9, 0x00, 0x10, 0x92,
  0xC8, 0x00, 0x10, 0x92, 0xCA, 0x00, 0x2F, 0x85, 0x38, 0x89, 0x49, 0x89, 0x5A, 0x89, 0x21, 0x15,
  0x81, 0xEE, 0x38, 0x07, 0x41, 0x05, 0x51, 0x05, 0x71, 0xF0, 0xCA, 0x01, 0xB9, 0x01, 0x96, 0x95,
  0x87, 0x95, 0x77, 0x95, 0x67, 0x95, 0x60, 0x58, 0x7B, 0x47, 0x81, 0x4E, 0x9F, 0x4F, 0xA8, 0xD5,
  0x21, 0x50, 0x31, 0x09, 0x02, 0xC0, 0x20, 0xE1, 0x30, 0xE0, 0x30, 0x93, 0xCD, 0x00, 0x20, 0x93,
  0xCC, 0x00, 0x10, 0x93, 0xCA, 0x00, 0x8F, 0x85, 0x98, 0x89, 0xA9, 0x89, 0xBA, 0x89, 0x81, 0x15,
  0x91, 0x4E, 0xA1, 0x05, 0xB1, 0x05, 0x11, 0xF4, 0x80, 0xE0, 0x01, 0xC0, 0x82, 0xE0, 0x80, 0x93,
  0xC8, 0x00, 0x88, 0xE9, 0x80, 0x93, 0xC9, 0x00, 0xDF, 0x91, 0xCF, 0x91, 0x1F, 0x91, 0x08, 0x95,
  0x1F, 0x92, 0x0F, 0x92, 0x0F, 0xB6, 0x0F, 0x92, 0x11, 0x24, 0x2F, 0x93, 0x3F, 0x93, 0x4F, 0x93,
  0x5F, 0x93, 0x6F, 0x93, 0x7F, 0x93, 0x8F, 0x93, 0x9F, 0x93, 0xAF, 0x93, 0xBF, 0x93, 0xEF, 0x93,
  0xFF, 0x93, 0x60, 0x91, 0xCE, 0x00, 0x8E, 0xB3, 0x84, 0x30, 0x19, 0xF4, 0x89, 0xE1, 0x91, 0xE0,
  0xAD, 0xDE, 0xFF, 0x91, 0xEF, 0x91, 0xBF, 0x91, 0xAF, 0x91, 0x9F, 0x91, 0x8F, 0x91, 0x7F, 0x91,
  0x6F, 0x91, 0x5F, 0x91, 0x4F, 0x91, 0x3F, 0x91, 0x2F, 0x91, 0x0F, 0x90, 0x0F, 0xBE, 0x0F, 0x90,
  0x1F, 0x90, 0x18, 0x95, 0xFC, 0x01, 0x85, 0x85, 0x80, 0xFF, 0x02, 0xC0, 0x5F, 0x98, 0x08, 0x95,
  0x5F, 0x9A, 0x08, 0x95, 0x29, 0x2F, 0x33, 0x27, 0x22, 0x30, 0x31, 0x05, 0x59, 0xF0, 0x23, 0x30,
  0x31, 0x05, 0x69, 0xF0, 0x21, 0x30, 0x31, 0x05, 0xF9, 0xF4, 0x82, 0xE1, 0x90, 0xE0, 0x22, 0xE1,
  0x31, 0xE0, 0x1E, 0xC0, 0x8E, 0xE3, 0x90, 0xE0, 0x24, 0xED, 0x30, 0xE0, 0x19, 0xC0, 0x99, 0x27,
  0x81, 0x30, 0x91, 0x05, 0x41, 0xF0, 0x82, 0x30, 0x91, 0x05, 0x41, 0xF0, 0x89, 0x2B, 0x61, 0xF4,
  0xE0, 0xED, 0xF0, 0xE0, 0x05, 0xC0, 0xE4, 0xEA, 0xF0, 0xE0, 0x02, 0xC0, 0xE8, 0xE8, 0xF0, 0xE0,
  0x84, 0x91, 0x90, 0xE0, 0x9F, 0x01, 0x04, 0xC0, 0x80, 0xE0, 0x90, 0xE0, 0x20, 0xE0, 0x30, 0xE0,
  0xFA, 0x01, 0x31, 0x83, 0x20, 0x83, 0x08, 0x95, 0x28, 0xE0, 0x30, 0xE0, 0x40, 0xE0, 0x28, 0x17,
  0x39, 0x07, 0x20, 0xF4, 0x4F, 0x5F, 0x22, 0x0F, 0x33, 0x1F, 0xF9, 0xCF, 0x84, 0x2F, 0x82, 0x95,
  0x80, 0x7F, 0x08, 0x95, 0x80, 0x93, 0xE9, 0x00, 0xEB, 0xEE, 0xF0, 0xE0, 0x80, 0x81, 0x81, 0x60,
  0x80, 0x83, 0xED, 0xEE, 0xF0, 0xE0, 0x10, 0x82, 0x60, 0x93, 0xEC, 0x00, 0x40, 0x83, 0x80, 0x91,
  0xEE, 0x00, 0x88, 0x1F, 0x88, 0x27, 0x88, 0x1F, 0x08, 0x95, 0x10, 0x92, 0xF4, 0x00, 0x80, 0xE0,
  0x80, 0x93, 0xE9, 0x00, 0x10, 0x92, 0xF0, 0x00, 0x10, 0x92, 0xE8, 0x00, 0x10, 0x92, 0xED, 0x00,
  0x90, 0x91, 0xEB, 0x00, 0x9E, 0x7F, 0x90, 0x93, 0xEB, 0x00, 0x8F, 0x5F, 0x85, 0x30, 0x81, 0xF7,
  0x08, 0x95, 0x80, 0x91, 0x27, 0x02, 0x87, 0xFD, 0x05, 0xC0, 0x80, 0x91, 0xE8, 0x00, 0x80, 0xFF,
  0x0D, 0xC0, 0x10, 0xC0, 0x80, 0x91, 0xE8, 0x00, 0x82, 0xFD, 0x04, 0xC0, 0x8E, 0xB3, 0x81, 0x11,
  0xF9, 0xCF, 0x08, 0x95, 0x80, 0x91, 0xE8, 0x00, 0x8B, 0x77, 0x07, 0xC0, 0x8E, 0xB3, 0x81, 0x11,
  0xEC, 0xCF, 0x08, 0x95, 0x80, 0x91, 0xE8, 0x00, 0x8E, 0x77, 0x80, 0x93, 0xE8, 0x00, 0x08, 0x95,
  0x85, 0xE6, 0x90, 0x91, 0xEC, 0x00, 0x90, 0xFF, 0x05, 0xC0, 0x90, 0x91, 0xE8, 0x00, 0x90, 0xFF,
  0x05, 0xC0, 0x1B, 0xC0, 0x90, 0x91, 0xE8, 0x00, 0x92, 0xFD, 0x17, 0xC0, 0x9E, 0xB3, 0x99, 0x23,
  0xB1, 0xF0, 0x9E, 0xB3, 0x95, 0x30, 0xA9, 0xF0, 0x90, 0x91, 0xEB, 0x00, 0x95, 0xFD, 0x13, 0xC0,
  0x90, 0x91, 0xE1, 0x00, 0x92, 0xFF, 0xE5, 0xCF, 0x90, 0x91, 0xE1, 0x00, 0x9B, 0x7F, 0x90, 0x93,
  0xE1, 0x00, 0x81, 0x50, 0xF1, 0xF6, 0x84, 0xE0, 0x08, 0x95, 0x80, 0xE0, 0x08, 0x95, 0x82, 0xE0,
  0x08, 0x95, 0x83, 0xE0, 0x08, 0x95, 0x81, 0xE0, 0x08, 0x95, 0x20, 0x91, 0x2D, 0x02, 0x30, 0x91,
  0x2E, 0x02, 0x26, 0x17, 0x37, 0x07, 0x48, 0xF0, 0x61, 0x15, 0x71, 0x05, 0x39, 0xF4, 0x20, 0x91,
  0xE8, 0x00, 0x2E, 0x77, 0x20, 0x93, 0xE8, 0x00, 0x01, 0xC0, 0xB9, 0x01, 0x30, 0xE0, 0x61, 0x15,
  0x71, 0x05, 0x91, 0xF1, 0x20, 0x91, 0xE8, 0x00, 0x23, 0xFD, 0x38, 0xC0, 0x20, 0x91, 0xE8, 0x00,
  0x22, 0xFF, 0x06, 0xC0, 0x80, 0x91, 0xE8, 0x00, 0x82, 0xFF, 0x29, 0xC0, 0x80, 0xE0, 0x08, 0x95,
  0x2E, 0xB3, 0x22, 0x23, 0x69, 0xF1, 0x2E, 0xB3, 0x25, 0x30, 0x61, 0xF1, 0x20, 0x91, 0xE8, 0x00,
  0x20, 0xFF, 0xE5, 0xCF, 0x20, 0x91, 0xF2, 0x00, 0xFC, 0x01, 0xCF, 0x01, 0x61, 0x15, 0x71, 0x05,
  0x49, 0xF0, 0x28, 0x30, 0x38, 0xF4, 0x81, 0x91, 0x80, 0x93, 0xF1, 0x00, 0x61, 0x50, 0x71, 0x09,
  0x2F, 0x5F, 0xF3, 0xCF, 0x31, 0xE0, 0x28, 0x30, 0x09, 0xF0, 0x30, 0xE0, 0x20, 0x91, 0xE8, 0x00,
  0x2E, 0x77, 0x20, 0x93, 0xE8, 0x00, 0xCB, 0xCF, 0x31, 0x11, 0xCC, 0xCF, 0xD3, 0xCF, 0x8E, 0xB3,
  0x88, 0x23, 0x31, 0xF0, 0x8E, 0xB3, 0x85, 0x30, 0x69, 0xF6, 0x04, 0xC0, 0x81, 0xE0, 0x08, 0x95,
  0x82, 0xE0, 0x08, 0x95, 0x83, 0xE0, 0x08, 0x95, 0x20, 0x91, 0x2D, 0x02, 0x30, 0x91, 0x2E, 0x02,
  0x26, 0x17, 0x37, 0x07, 0x48, 0xF0, 0x61, 0x15, 0x71, 0x05, 0x39, 0xF4, 0x20, 0x91, 0xE8, 0x00,
  0x2E, 0x77, 0x20, 0x93, 0xE8, 0x00, 0x01, 0xC0, 0xB9, 0x01, 0x30, 0xE0, 0x61, 0x15, 0x71, 0x05,
  0x99, 0xF1, 0x20, 0x91, 0xE8, 0x00, 0x23, 0xFD, 0x39, 0xC0, 0x20, 0x91, 0xE8, 0x00, 0x22, 0xFF,
  0x06, 0xC0, 0x80, 0x91, 0xE8, 0x00, 0x82, 0xFF, 0x2A, 0xC0, 0x80, 0xE0, 0x08, 0x95, 0x2E, 0xB3,
  0x22, 0x23, 0x71, 0xF1, 0x2E, 0xB3, 0x25, 0x30, 0x69, 0xF1, 0x20, 0x91, 0xE8, 0x00, 0x20, 0xFF,
  0xE5, 0xCF, 0x20, 0x91, 0xF2, 0x00, 0xFC, 0x01, 0xCF, 0x01, 0x61, 0x15, 0x71, 0x05, 0x51, 0xF0,
  0x28, 0x30, 0x40, 0xF4, 0x84, 0x91, 0x80, 0x93, 0xF1, 0x00, 0x61, 0x50, 0x71, 0x09, 0x2F, 0x5F,
  0x31, 0x96, 0xF2, 0xCF, 0x31, 0xE0, 0x28, 0x30, 0x09, 0xF0, 0x30, 0xE0, 0x20, 0x91, 0xE8, 0x00,
  0x2E, 0x77, 0x20, 0x93, 0xE8, 0x00, 0xCA, 0xCF, 0x31, 0x11, 0xCB, 0xCF, 0xD2, 0xCF, 0x8E, 0xB3,
  0x88, 0x23, 0x31, 0xF0, 0x8E, 0xB3, 0x85, 0x30, 0x61, 0xF6, 0x04, 0xC0, 0x81, 0xE0, 0x08, 0x95,
  0x82, 0xE0, 0x08, 0x95, 0x83, 0xE0, 0x08, 0x95, 0x61, 0x15, 0x71, 0x05, 0x29, 0xF4, 0x20, 0x91,
  0xE8, 0x00, 0x2B, 0x77, 0x20, 0x93, 0xE8, 0x00, 0x61, 0x15, 0x71, 0x05, 0x49, 0xF1, 0x20, 0x91,
  0xE8, 0x00, 0x23, 0xFD, 0x2A, 0xC0, 0x2E, 0xB3, 0x22, 0x23, 0x59, 0xF1, 0x2E, 0xB3, 0x25, 0x30,
  0x51, 0xF1, 0x20, 0x91, 0xE8, 0x00, 0x22, 0xFF, 0xF2, 0xCF, 0xFC, 0x01, 0x80, 0x91, 0xF2, 0x00,
  0x88, 0x23, 0x71, 0xF0, 0x9F, 0x01, 0x2F, 0x5F, 0x3F, 0x4F, 0xC9, 0x01, 0x40, 0x91, 0xF1, 0x00,
  0x40, 0x83, 0x61, 0x50, 0x71, 0x09, 0x61, 0x15, 0x71, 0x05, 0xC9, 0xF2, 0xF9, 0x01, 0xEE, 0xCF,
  0xCF, 0x01, 0xD5, 0xCF, 0x8E, 0xB3, 0x88, 0x23, 0x61, 0xF0, 0x8E, 0xB3, 0x85, 0x30, 0x59, 0xF0,
  0x80, 0x91, 0xE8, 0x00, 0x80, 0xFF, 0xF6, 0xCF, 0x02, 0xC0, 0x81, 0xE0, 0x08, 0x95, 0x80, 0xE0,
  0x08, 0x95, 0x82, 0xE0, 0x08, 0x95, 0x83, 0xE0, 0x08, 0x95, 0x42, 0xD0, 0x44, 0xD0, 0x1E, 0xBA,
  0x10, 0x92, 0x25, 0x02, 0x10, 0x92, 0x24, 0x02, 0x10, 0x92, 0x23, 0x02, 0x84, 0xE0, 0x89, 0xBD,
  0x89, 0xB5, 0x82, 0x60, 0x89, 0xBD, 0x09, 0xB4, 0x00, 0xFE, 0xFD, 0xCF, 0x80, 0x91, 0xD8, 0x00,
  0x98, 0x2F, 0x9F, 0x77, 0x90, 0x93, 0xD8, 0x00, 0x80, 0x68, 0x80, 0x93, 0xD8, 0x00, 0x80, 0x91,
  0x63, 0x00, 0x8E, 0x7F, 0x80, 0x93, 0x63, 0x00, 0x80, 0x91, 0xD8, 0x00, 0x8F, 0x7D, 0x80, 0x93,
  0xD8, 0x00, 0x80, 0x91, 0xE0, 0x00, 0x8E, 0x7F, 0x80, 0x93, 0xE0, 0x00, 0x80, 0x91, 0xE1, 0x00,
  0x8E, 0x7F, 0x80, 0x93, 0xE1, 0x00, 0x80, 0x91, 0xE2, 0x00, 0x81, 0x60, 0x80, 0x93, 0xE2, 0x00,
  0x80, 0x91, 0xE1, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE1, 0x00, 0x80, 0x91, 0xE2, 0x00, 0x88, 0x60,
  0x80, 0x93, 0xE2, 0x00, 0x08, 0x95, 0xC1, 0xDF, 0x81, 0xE0, 0x80, 0x93, 0x26, 0x02, 0x08, 0x95,
  0x10, 0x92, 0xE2, 0x00, 0x08, 0x95, 0x10, 0x92, 0xE1, 0x00, 0x08, 0x95, 0x1F, 0x92, 0x0F, 0x92,
  0x0F, 0xB6, 0x0F, 0x92, 0x11, 0x24, 0x2F, 0x93, 0x3F, 0x93, 0x4F, 0x93, 0x5F, 0x93, 0x6F, 0x93,
  0x7F, 0x93, 0x8F, 0x93, 0x9F, 0x93, 0xAF, 0x93, 0xBF, 0x93, 0xEF, 0x93, 0xFF, 0x93, 0x80, 0x91,
  0xE1, 0x00, 0x80, 0xFF, 0x1B, 0xC0, 0x80, 0x91, 0xE2, 0x00, 0x80, 0xFF, 0x17, 0xC0, 0x80, 0x91,
  0xE1, 0x00, 0x8E, 0x7F, 0x80, 0x93, 0xE1, 0x00, 0x80, 0x91, 0xE2, 0x00, 0x8E, 0x7F, 0x80, 0x93,
  0xE2, 0x00, 0x80, 0x91, 0xE2, 0x00, 0x80, 0x61, 0x80, 0x93, 0xE2, 0x00, 0x80, 0x91, 0xD8, 0x00,
  0x80, 0x62, 0x80, 0x93, 0xD8, 0x00, 0x19, 0xBC, 0x1E, 0xBA, 0xEB, 0xD1, 0x80, 0x91, 0xE1, 0x00,
  0x84, 0xFF, 0x29, 0xC0, 0x80, 0x91, 0xE2, 0x00, 0x84, 0xFF, 0x25, 0xC0, 0x84, 0xE0, 0x89, 0xBD,
  0x89, 0xB5, 0x82, 0x60, 0x89, 0xBD, 0x09, 0xB4, 0x00, 0xFE, 0xFD, 0xCF, 0x80, 0x91, 0xD8, 0x00,
  0x8F, 0x7D, 0x80, 0x93, 0xD8, 0x00, 0x80, 0x91, 0xE1, 0x00, 0x8F, 0x7E, 0x80, 0x93, 0xE1, 0x00,
  0x80, 0x91, 0xE2, 0x00, 0x8F, 0x7E, 0x80, 0x93, 0xE2, 0x00, 0x80, 0x91, 0xE2, 0x00, 0x81, 0x60,
  0x80, 0x93, 0xE2, 0x00, 0x80, 0x91, 0x25, 0x02, 0x88, 0x23, 0x11, 0xF0, 0x84, 0xE0, 0x01, 0xC0,
  0x81, 0xE0, 0x8E, 0xBB, 0xBE, 0xD1, 0x80, 0x91, 0xE1, 0x00, 0x83, 0xFF, 0x27, 0xC0, 0x80, 0x91,
  0xE2, 0x00, 0x83, 0xFF, 0x23, 0xC0, 0x80, 0x91, 0xE1, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE1, 0x00,
  0x82, 0xE0, 0x8E, 0xBB, 0x10, 0x92, 0x25, 0x02, 0x80, 0x91, 0xE1, 0x00, 0x8E, 0x7F, 0x80, 0x93,
  0xE1, 0x00, 0x80, 0x91, 0xE2, 0x00, 0x8E, 0x7F, 0x80, 0x93, 0xE2, 0x00, 0x80, 0x91, 0xE2, 0x00,
  0x80, 0x61, 0x80, 0x93, 0xE2, 0x00, 0xE9, 0xDD, 0x42, 0xE0, 0x60, 0xE0, 0x80, 0xE0, 0xD2, 0xDD,
  0x80, 0x91, 0xF0, 0x00, 0x88, 0x60, 0x80, 0x93, 0xF0, 0x00, 0x93, 0xD1, 0x80, 0x91, 0xE1, 0x00,
  0x82, 0xFF, 0x0A, 0xC0, 0x80, 0x91, 0xE2, 0x00, 0x82, 0xFF, 0x06, 0xC0, 0x80, 0x91, 0xE1, 0x00,
  0x8B, 0x7F, 0x80, 0x93, 0xE1, 0x00, 0x85, 0xD1, 0xFF, 0x91, 0xEF, 0x91, 0xBF, 0x91, 0xAF, 0x91,
  0x9F, 0x91, 0x8F, 0x91, 0x7F, 0x91, 0x6F, 0x91, 0x5F, 0x91, 0x4F, 0x91, 0x3F, 0x91, 0x2F, 0x91,
  0x0F, 0x90, 0x0F, 0xBE, 0x0F, 0x90, 0x1F, 0x90, 0x18, 0x95, 0x1F, 0x92, 0x0F, 0x92, 0x0F, 0xB6,
  0x0F, 0x92, 0x11, 0x24, 0x2F, 0x93, 0x3F, 0x93, 0x4F, 0x93, 0x5F, 0x93, 0x6F, 0x93, 0x7F, 0x93,
  0x8F, 0x93, 0x9F, 0x93, 0xAF, 0x93, 0xBF, 0x93, 0xCF, 0x93, 0xEF, 0x93, 0xFF, 0x93, 0xE9, 0xEE,
  0xF0, 0xE0, 0xC0, 0x81, 0xC7, 0x70, 0x10, 0x82, 0xE0, 0xEF, 0xF0, 0xE0, 0x80, 0x81, 0x87, 0x7F,
  0x80, 0x83, 0x78, 0x94, 0x1C, 0xD0, 0xF8, 0x94, 0xE9, 0xEE, 0xF0, 0xE0, 0x10, 0x82, 0xA0, 0xEF,
  0xB0, 0xE0, 0x8C, 0x91, 0x88, 0x60, 0x8C, 0x93, 0xC0, 0x83, 0xFF, 0x91, 0xEF, 0x91, 0xCF, 0x91,
  0xBF, 0x91, 0xAF, 0x91, 0x9F, 0x91, 0x8F, 0x91, 0x7F, 0x91, 0x6F, 0x91, 0x5F, 0x91, 0x4F, 0x91,
  0x3F, 0x91, 0x2F, 0x91, 0x0F, 0x90, 0x0F, 0xBE, 0x0F, 0x90, 0x1F, 0x90, 0x18, 0x95, 0x1F, 0x93,
  0xCF, 0x93, 0xDF, 0x93, 0xCD, 0xB7, 0xDE, 0xB7, 0xAA, 0x97, 0x0F, 0xB6, 0xF8, 0x94, 0xDE, 0xBF,
  0x0F, 0xBE, 0xCD, 0xBF, 0xE7, 0xE2, 0xF2, 0xE0, 0x80, 0x91, 0xF1, 0x00, 0x81, 0x93, 0x22, 0xE0,
  0xEF, 0x32, 0xF2, 0x07, 0xC9, 0xF7, 0x20, 0x91, 0x27, 0x02, 0x30, 0x91, 0x28, 0x02, 0x83, 0x2F,
  0x90, 0xE0, 0x8A, 0x30, 0x91, 0x05, 0x08, 0xF0, 0x10, 0xC1, 0xFC, 0x01, 0xE6, 0x5C, 0xFF, 0x4F,
  0x89, 0xC2, 0x20, 0x38, 0x81, 0xF0, 0x22, 0x38, 0x09, 0xF0, 0x07, 0xC1, 0x80, 0x91, 0x2B, 0x02,
  0x87, 0x70, 0x80, 0x93, 0xE9, 0x00, 0x80, 0x91, 0xEB, 0x00, 0x85, 0xFB, 0x88, 0x27, 0x80, 0xF9,
  0x10, 0x92, 0xE9, 0x00, 0x06, 0xC0, 0x80, 0x91, 0x23, 0x02, 0x90, 0x91, 0x24, 0x02, 0x91, 0x11,
  0x82, 0x60, 0x90, 0x91, 0xE8, 0x00, 0x97, 0x7F, 0x90, 0x93, 0xE8, 0x00, 0x80, 0x93, 0xF1, 0x00,
  0x10, 0x92, 0xF1, 0x00, 0xBD, 0xC0, 0x82, 0x2F, 0x8D, 0x7F, 0x09, 0xF0, 0xE6, 0xC0, 0x22, 0x23,
  0x19, 0xF0, 0x22, 0x30, 0x61, 0xF0, 0xD2, 0xC0, 0x80, 0x91, 0x29, 0x02, 0x81, 0x30, 0x09, 0xF0,
  0xCD, 0xC0, 0x33, 0x30, 0x09, 0xF0, 0x80, 0xE0, 0x80, 0x93, 0x24, 0x02, 0x28, 0xC0, 0x80, 0x91,
  0x29, 0x02, 0x81, 0x11, 0x24, 0xC0, 0x20, 0x91, 0x2B, 0x02, 0x27, 0x70, 0x09, 0xF4, 0xBE, 0xC0,
  0x20, 0x93, 0xE9, 0x00, 0x80, 0x91, 0xEB, 0x00, 0x80, 0xFF, 0xB8, 0xC0, 0x80, 0x91, 0xEB, 0x00,
  0x33, 0x30, 0x11, 0xF4, 0x80, 0x62, 0x11, 0xC0, 0x80, 0x61, 0x80, 0x93, 0xEB, 0x00, 0x81, 0xE0,
  0x90, 0xE0, 0x02, 0x2E, 0x01, 0xC0, 0x88, 0x0F, 0x0A, 0x94, 0xEA, 0xF7, 0x80, 0x93, 0xEA, 0x00,
  0x10, 0x92, 0xEA, 0x00, 0x80, 0x91, 0xEB, 0x00, 0x88, 0x60, 0x80, 0x93, 0xEB, 0x00, 0x10, 0x92,
  0xE9, 0x00, 0x80, 0x91, 0xE8, 0x00, 0x87, 0x7F, 0x7E, 0xC0, 0x21, 0x11, 0xA6, 0xC0, 0x10, 0x91,
  0x29, 0x02, 0x80, 0x91, 0xE8, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00, 0x0A, 0xDD, 0x80, 0x91,
  0xE8, 0x00, 0x80, 0xFD, 0x04, 0xC0, 0x8E, 0xB3, 0x81, 0x11, 0xF9, 0xCF, 0x87, 0xC0, 0x81, 0x2F,
  0x8F, 0x77, 0x11, 0xF0, 0x93, 0xE0, 0x01, 0xC0, 0x92, 0xE0, 0x9E, 0xBB, 0x80, 0x68, 0x80, 0x93,
  0xE3, 0x00, 0x7C, 0xC0, 0x20, 0x58, 0x22, 0x30, 0x08, 0xF0, 0x87, 0xC0, 0x80, 0x91, 0x29, 0x02,
  0x90, 0x91, 0x2A, 0x02, 0x8C, 0x3D, 0x23, 0xE0, 0x92, 0x07, 0x81, 0xF5, 0x83, 0xE0, 0x8A, 0x83,
  0x8A, 0xE2, 0x89, 0x83, 0x4F, 0xB7, 0xF8, 0x94, 0xDE, 0x01, 0x13, 0x96, 0x20, 0xE0, 0x3E, 0xE0,
  0x51, 0xE2, 0xE3, 0x2F, 0xF0, 0xE0, 0x50, 0x93, 0x57, 0x00, 0xE4, 0x91, 0x20, 0xFF, 0x03, 0xC0,
  0xE2, 0x95, 0xEF, 0x70, 0x3F, 0x5F, 0xEF, 0x70, 0x90, 0xE3, 0x9E, 0x0F, 0x9A, 0x33, 0x10, 0xF0,
  0xE9, 0x5C, 0x01, 0xC0, 0xE9, 0x2F, 0x8E, 0x2F, 0x90, 0xE0, 0x8D, 0x93, 0x9D, 0x93, 0x2F, 0x5F,
  0x24, 0x31, 0x39, 0xF7, 0x4F, 0xBF, 0x80, 0x91, 0xE8, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00,
  0x6A, 0xE2, 0x70, 0xE0, 0xCE, 0x01, 0x01, 0x96, 0x08, 0xDD, 0x11, 0xC0, 0xAE, 0x01, 0x4F, 0x5F,
  0x5F, 0x4F, 0x60, 0x91, 0x2B, 0x02, 0x4E, 0xDC, 0x00, 0x97, 0xC1, 0xF1, 0x20, 0x91, 0xE8, 0x00,
  0x27, 0x7F, 0x20, 0x93, 0xE8, 0x00, 0xBC, 0x01, 0x89, 0x81, 0x9A, 0x81, 0x4D, 0xDD, 0x80, 0x91,
  0xE8, 0x00, 0x8B, 0x77, 0x80, 0x93, 0xE8, 0x00, 0x29, 0xC0, 0x20, 0x38, 0xB1, 0xF5, 0x80, 0x91,
  0xE8, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00, 0x80, 0x91, 0x25, 0x02, 0x80, 0x93, 0xF1, 0x00,
  0x80, 0x91, 0xE8, 0x00, 0x8E, 0x77, 0x80, 0x93, 0xE8, 0x00, 0x93, 0xDC, 0x17, 0xC0, 0x21, 0x11,
  0x24, 0xC0, 0x90, 0x91, 0x29, 0x02, 0x92, 0x30, 0x88, 0xF4, 0x80, 0x91, 0xE8, 0x00, 0x87, 0x7F,
  0x80, 0x93, 0xE8, 0x00, 0x90, 0x93, 0x25, 0x02, 0x84, 0xDC, 0x80, 0x91, 0x25, 0x02, 0x88, 0x23,
  0x11, 0xF0, 0x84, 0xE0, 0x01, 0xC0, 0x83, 0xE0, 0x8E, 0xBB, 0x83, 0xDB, 0x80, 0x91, 0xE8, 0x00,
  0x83, 0xFF, 0x0D, 0xC0, 0x80, 0x91, 0xEB, 0x00, 0x80, 0x62, 0x80, 0x93, 0xEB, 0x00, 0x80, 0x91,
  0xE8, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00, 0x02, 0xC0, 0x76, 0xDB, 0xEF, 0xCF, 0xAA, 0x96,
  0x0F, 0xB6, 0xF8, 0x94, 0xDE, 0xBF, 0x0F, 0xBE, 0xCD, 0xBF, 0xDF, 0x91, 0xCF, 0x91, 0x1F, 0x91,
  0x08, 0x95, 0x08, 0x95, 0xCF, 0x93, 0x8E, 0xB3, 0x88, 0x23, 0x59, 0xF0, 0xC0, 0x91, 0xE9, 0x00,
  0xC7, 0x70, 0x10, 0x92, 0xE9, 0x00, 0x80, 0x91, 0xE8, 0x00, 0x83, 0xFD, 0xB8, 0xDE, 0xC0, 0x93,
  0xE9, 0x00, 0xCF, 0x91, 0x08, 0x95, 0x08, 0x95, 0xCF, 0x93, 0xDF, 0x93, 0xEC, 0x01, 0x80, 0x91,
  0xE8, 0x00, 0x83, 0xFF, 0x5F, 0xC0, 0x88, 0x81, 0x90, 0xE0, 0x20, 0x91, 0x2B, 0x02, 0x30, 0x91,
  0x2C, 0x02, 0x28, 0x17, 0x39, 0x07, 0x09, 0xF0, 0x55, 0xC0, 0x80, 0x91, 0x28, 0x02, 0x81, 0x32,
  0x49, 0xF0, 0x18, 0xF4, 0x80, 0x32, 0xC9, 0xF0, 0x4D, 0xC0, 0x82, 0x32, 0x61, 0xF1, 0x83, 0x32,
  0xC9, 0xF1, 0x48, 0xC0, 0x80, 0x91, 0x27, 0x02, 0x81, 0x3A, 0x09, 0xF0, 0x43, 0xC0, 0x80, 0x91,
  0xE8, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00, 0x67, 0xE0, 0x70, 0xE0, 0xCE, 0x01, 0x0F, 0x96,
  0x6C, 0xDC, 0x80, 0x91, 0xE8, 0x00, 0x8B, 0x77, 0x13, 0xC0, 0x80, 0x91, 0x27, 0x02, 0x81, 0x32,
  0x89, 0xF5, 0x80, 0x91, 0xE8, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00, 0x67, 0xE0, 0x70, 0xE0,
  0xCE, 0x01, 0x0F, 0x96, 0x09, 0xDD, 0xCE, 0x01, 0x1A, 0xDB, 0x80, 0x91, 0xE8, 0x00, 0x8E, 0x77,
  0x80, 0x93, 0xE8, 0x00, 0x1F, 0xC0, 0x80, 0x91, 0x27, 0x02, 0x81, 0x32, 0xD9, 0xF4, 0x80, 0x91,
  0xE8, 0x00, 0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00, 0x80, 0x91, 0x29, 0x02, 0x8D, 0x87, 0xCE, 0x01,
  0x89, 0xDB, 0x0D, 0xC0, 0x80, 0x91, 0x27, 0x02, 0x81, 0x32, 0x61, 0xF4, 0x80, 0x91, 0xE8, 0x00,
  0x87, 0x7F, 0x80, 0x93, 0xE8, 0x00, 0x60, 0x91, 0x29, 0x02, 0xCE, 0x01, 0x9C, 0xDF, 0xDF, 0x91,
  0xCF, 0x91, 0xE7, 0xCB, 0xDF, 0x91, 0xCF, 0x91, 0x08, 0x95, 0x0F, 0x93, 0x1F, 0x93, 0xCF, 0x93,
  0xDF, 0x93, 0xEC, 0x01, 0xFC, 0x01, 0x3D, 0x96, 0x89, 0xE0, 0xDF, 0x01, 0x1D, 0x92, 0x8A, 0x95,
  0xE9, 0xF7, 0x2A, 0x81, 0x3B, 0x81, 0x8C, 0x81, 0x88, 0x23, 0x11, 0xF0, 0x14, 0xE0, 0x01, 0xC0,
  0x10, 0xE0, 0x09, 0x81, 0xC9, 0x01, 0x98, 0xDB, 0x41, 0x2F, 0x48, 0x2B, 0x42, 0x60, 0x61, 0xE8,
  0x80, 0x2F, 0xA0, 0xDB, 0x88, 0x23, 0x41, 0xF1, 0x2E, 0x81, 0x3F, 0x81, 0x88, 0x85, 0x88, 0x23,
  0x11, 0xF0, 0x14, 0xE0, 0x01, 0xC0, 0x10, 0xE0, 0x0D, 0x81, 0xC9, 0x01, 0x85, 0xDB, 0x41, 0x2F,
  0x48, 0x2B, 0x42, 0x60, 0x60, 0xE8, 0x80, 0x2F, 0x8D, 0xDB, 0x88, 0x23, 0xA9, 0xF0, 0x2A, 0x85,
  0x3B, 0x85, 0x8C, 0x85, 0x88, 0x23, 0x11, 0xF0, 0x14, 0xE0, 0x01, 0xC0, 0x10, 0xE0, 0xC9, 0x85,
  0xC9, 0x01, 0x72, 0xDB, 0x41, 0x2F, 0x48, 0x2B, 0x42, 0x60, 0x61, 0xEC, 0x8C, 0x2F, 0xDF, 0x91,
  0xCF, 0x91, 0x1F, 0x91, 0x0F, 0x91, 0x76, 0xCB, 0x80, 0xE0, 0xDF, 0x91, 0xCF, 0x91, 0x1F, 0x91,
  0x0F, 0x91, 0x08, 0x95, 0xCF, 0x93, 0xC6, 0x2F, 0x2E, 0xB3, 0x24, 0x30, 0xE9, 0xF4, 0xFC, 0x01,
  0x47, 0x85, 0x50, 0x89, 0x61, 0x89, 0x72, 0x89, 0x45, 0x2B, 0x46, 0x2B, 0x47, 0x2B, 0xA1, 0xF0,
  0x81, 0x81, 0x80, 0x93, 0xE9, 0x00, 0x80, 0x91, 0xE8, 0x00, 0x85, 0xFF, 0x04, 0xC0, 0xC0, 0x93,
  0xF1, 0x00, 0x80, 0xE0, 0x0A, 0xC0, 0x80, 0x91, 0xE8, 0x00, 0x8E, 0x77, 0x80, 0x93, 0xE8, 0x00,
  0x97, 0xDB, 0x88, 0x23, 0xA1, 0xF3, 0x01, 0xC0, 0x82, 0xE0, 0xCF, 0x91, 0x08, 0x95, 0x2E, 0xB3,
  0x24, 0x30, 0x19, 0xF5, 0xFC, 0x01, 0x47, 0x85, 0x50, 0x89, 0x61, 0x89, 0x72, 0x89, 0x45, 0x2B,
  0x46, 0x2B, 0x47, 0x2B, 0xD1, 0xF0, 0x81, 0x81, 0x80, 0x93, 0xE9, 0x00, 0x80, 0x91, 0xF2, 0x00,
  0x88, 0x23, 0x89, 0xF0, 0x90, 0x91, 0xE8, 0x00, 0x80, 0x91, 0xE8, 0x00, 0x8E, 0x77, 0x80, 0x93,
  0xE8, 0x00, 0x95, 0xFD, 0x08, 0xC0, 0x74, 0xDB, 0x81, 0x11, 0x08, 0xC0, 0x80, 0x91, 0xE8, 0x00,
  0x8E, 0x77, 0x80, 0x93, 0xE8, 0x00, 0x80, 0xE0, 0x08, 0x95, 0x82, 0xE0, 0x08, 0x95, 0x2E, 0xB3,
  0x24, 0x30, 0x51, 0xF4, 0xFC, 0x01, 0x47, 0x85, 0x50, 0x89, 0x61, 0x89, 0x72, 0x89, 0x45, 0x2B,
  0x46, 0x2B, 0x47, 0x2B, 0x09, 0xF0, 0xCB, 0xCF, 0x08, 0x95, 0x2E, 0xB3, 0x24, 0x30, 0x19, 0xF0,
  0x8F, 0xEF, 0x9F, 0xEF, 0x08, 0x95, 0xFC, 0x01, 0x47, 0x85, 0x50, 0x89, 0x61, 0x89, 0x72, 0x89,
  0x45, 0x2B, 0x46, 0x2B, 0x47, 0x2B, 0xA1, 0xF3, 0x85, 0x81, 0x80, 0x93, 0xE9, 0x00, 0x80, 0x91,
  0xE8, 0x00, 0x82, 0xFF, 0xED, 0xCF, 0x80, 0x91, 0xF2, 0x00, 0x88, 0x23, 0x21, 0xF0, 0x20, 0x91,
  0xF1, 0x00, 0x30, 0xE0, 0x02, 0xC0, 0x2F, 0xEF, 0x3F, 0xEF, 0x80, 0x91, 0xF2, 0x00, 0x81, 0x11,
  0x05, 0xC0, 0x80, 0x91, 0xE8, 0x00, 0x8B, 0x77, 0x80, 0x93, 0xE8, 0x00, 0xC9, 0x01, 0x08, 0x95,
  0xA1, 0xE2, 0x1A, 0x2E, 0xAA, 0x1B, 0xBB, 0x1B, 0xFD, 0x01, 0x0D, 0xC0, 0xAA, 0x1F, 0xBB, 0x1F,
  0xEE, 0x1F, 0xFF, 0x1F, 0xA2, 0x17, 0xB3, 0x07, 0xE4, 0x07, 0xF5, 0x07, 0x20, 0xF0, 0xA2, 0x1B,
  0xB3, 0x0B, 0xE4, 0x0B, 0xF5, 0x0B, 0x66, 0x1F, 0x77, 0x1F, 0x88, 0x1F, 0x99, 0x1F, 0x1A, 0x94,
  0x69, 0xF7, 0x60, 0x95, 0x70, 0x95, 0x80, 0x95, 0x90, 0x95, 0x9B, 0x01, 0xAC, 0x01, 0xBD, 0x01,
  0xCF, 0x01, 0x08, 0x95, 0xEE, 0x0F, 0xFF, 0x1F, 0x05, 0x90, 0xF4, 0x91, 0xE0, 0x2D, 0x09, 0x94,
  0xF8, 0x94, 0xFF, 0xCF, 0x00, 0x03, 0x40, 0x00, 0x00, 0x04, 0x40, 0x00, 0x00, 0x02, 0x08, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
}; // end of atmega2560_bootloader_hex

