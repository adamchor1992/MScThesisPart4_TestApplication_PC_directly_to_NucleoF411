#pragma once

//#define FRAME_SIZE 20

#include <stdint.h>

/*20-byte frame*/
struct UARTFrameStruct_t
{
  uint8_t source = '1';   //source/target ID - always 1
  uint8_t module;       //module ID
  uint8_t function;         //frame type (data or control)
  uint8_t parameter;    //parameter ID
  uint8_t sign;         //sign of payload value, '1' - positive, '2' - negative, always '1' for control frame
  uint8_t length;       //length of payload
  uint8_t payload[10];  //payload
  uint8_t crc[4];       //32 bit CRC
};
