#ifndef UTILITIES_H
#define UTILITIES_H

#include "uart_frame_struct.h"
#include "crc32.h"
#include <cmath>
#include <assert.h>
#include <windows.h> // for Sleep
#include "crc32.h"

void convertFrameTableToUARTstruct(const uint8_t frameTable[],UARTFrameStruct_t & frameStructure);
void convertUARTstructToFrameTable(const UARTFrameStruct_t & frameStructure, uint8_t frameTable[]);
uint32_t Calculate_CRC32 (char *data, int len);
void appendCRCtoFrame(uint8_t frame[]);

#endif // UTILITIES_H
