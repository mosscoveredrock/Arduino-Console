
#include "Arduino.h"

/*
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 */

const unsigned char bmpBoot[84*48] PROGMEM = 
{
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B01111101,B00101111,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11110101,B00010011,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000001,B11000100,B10001001,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000011,B11000100,B01000100,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000011,B01000100,B01000010,B01100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000110,B01000010,B00100010,B00110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000110,B01000010,B00100001,B00110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001100,B00000010,B00010000,B00011000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001100,B11011010,B00010011,B01111000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001100,B11011000,B00000011,B01111000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001100,B11011011,B01011011,B01111000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001100,B11111011,B11111011,B11111000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001100,B01110001,B10110001,B11111000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001100,B00000000,B00000000,B01111000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000110,B00100001,B00010000,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000110,B00100001,B00010000,B11110000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000011,B00100001,B00010001,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000011,B10010001,B00100011,B11100000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000001,B11010010,B00100111,B11000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B11110010,B01001111,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B01111010,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000011,B00000111,B00001111,B10001110,B00000110,B00000011,B00001100,B01111110,B00000110,B00011000,B01100000,
  B00000111,B00001111,B00011111,B11011110,B00011111,B10000011,B00011100,B11111111,B00011111,B10111100,B11110000,
  B00000111,B10001111,B00011111,B10011110,B00111111,B11000111,B10011101,B11111111,B00111111,B11111101,B11110000,
  B00001111,B10011111,B00011100,B00011100,B01111000,B11100111,B10011101,B11100111,B01111000,B11111111,B11100000,
  B00001111,B10011111,B00111000,B00111100,B01110000,B11101111,B10111101,B11000111,B11110000,B11111111,B11000000,
  B00001111,B10111111,B10111000,B00111100,B11100000,B01101111,B10111101,B11000111,B11100000,B01111111,B10000000,
  B00011111,B10111111,B10111111,B10111000,B11100000,B01111111,B10111001,B11111110,B11100000,B01101111,B10000000,
  B00011111,B11110111,B10111111,B10111000,B11100000,B01111111,B11111001,B11111111,B11100000,B01101111,B00000000,
  B00111001,B11110111,B10111000,B00111000,B11100000,B11111101,B11110011,B11001111,B11100000,B11111111,B00000000,
  B00111001,B11100011,B11110000,B01110000,B11100000,B11111101,B11110011,B10000111,B11100000,B11111110,B00000000,
  B01111001,B11100011,B11110000,B01110000,B01110001,B11111101,B11110011,B10000111,B01110001,B11011110,B00000000,
  B01110001,B11100011,B11111111,B11111111,B11111111,B11111000,B11110111,B11111111,B01111111,B11011100,B00000000,
  B11110000,B11000011,B11111111,B11111111,B11111111,B11111000,B11100111,B11111110,B00111111,B10011100,B00000000,
  B11100000,B11000001,B10111111,B01111111,B00111111,B00110000,B01100111,B11111000,B00011110,B00001100,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

const unsigned char bmpTextbox[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,
  B10111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B01000000,B00000000,B00000000,B00000000,
  B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11000000,B00000000,B00000000,B00000000,
  B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11000000,B00000000,B00000000,B00000000,
  B10111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B01000000,B00000000,B00000000,B00000000,
  B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};


const unsigned char bmpPreviewSnake[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11111111,B11111111,B10100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00011000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00110000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00110000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00110000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111111,B11111000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111111,B11111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111111,B11111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00111111,B11111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000111,B11111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B11111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B11111100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B11111000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000110,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11111111,B11111111,B10100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

const unsigned char bmpPreviewBreakout[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11111111,B11111111,B10100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11111111,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100001,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100001,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100001,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100001,B11111110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100000,B00011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100000,B00011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100000,B00011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B11100000,B00011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000001,B10011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000011,B11011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000011,B11011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000001,B10011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000100,B00011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00011110,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00010000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01000000,B00000100,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B00000000,B00010000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B01000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011001,B00000001,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01000100,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B11111110,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111100,B00000000,B01100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00000000,B00000000,B11100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11111111,B11111111,B10100000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

const unsigned char bmpTextSnake[] PROGMEM = {
  B01100000,B00000001,B00000000,B00000000,B00000000,B00000000,
  B10010000,B00000001,B00000000,B00000000,B00000000,B00000000,
  B10000111,B00011101,B00100110,B00000000,B00000000,B00000000,
  B01100100,B10100101,B01001001,B00000000,B00000000,B00000000,
  B00010100,B10100101,B10001110,B00000000,B00000000,B00000000,
  B10010100,B10100101,B01001000,B00000000,B00000000,B00000000,
  B01100100,B10011101,B00100111,B00000000,B00000000,B00000000
};

const unsigned char bmpTextBreakout[] PROGMEM = {
  B11110000,B00000000,B00001000,B00000000,B00001000,B00000000,
  B01001000,B00000000,B00001000,B00000000,B00001000,B00000000,
  B01001010,B11011000,B11101001,B00110010,B01011100,B00000000,
  B01110011,B00100101,B00101010,B01001010,B01001000,B00000000,
  B01001010,B00111001,B00101100,B01001010,B01001000,B00000000,
  B01001010,B00100001,B00101010,B01001010,B01001000,B00000000,
  B11110010,B00011100,B11101001,B00110001,B10001000,B00000000
};

const unsigned char bmpCursor[] PROGMEM = {
  B00000000,
  B00000000,
  B10000000,
  B11000000,
  B10000000,
  B00000000,
  B00000000,
};

const unsigned char bmpDino[] PROGMEM = {
  B00000000,B00111111,B11110000,
  B00000000,B01111111,B11111000,
  B00000000,B01101111,B11111000,
  B00000000,B01111111,B11111000,
  B00000000,B01111111,B11111000,
  B00000000,B01111111,B11111000,
  B00000000,B01111110,B00000000,
  B00000000,B01111111,B11110000,
  B10000000,B11111100,B00000000,
  B10000001,B11111100,B00000000,
  B11000111,B11111100,B00000000,
  B11101111,B11111111,B00000000,
  B11111111,B11111101,B00000000,
  B01111111,B11111100,B00000000,
  B00111111,B11111100,B00000000,
  B00001111,B11111000,B00000000,
  B00001111,B11110000,B00000000,
  B00000111,B11100000,B00000000,
  B00000111,B01100000,B00000000,
  B00000110,B00100000,B00000000,
  B00000100,B00100000,B00000000,
  B00000110,B00111000,B00000000
};