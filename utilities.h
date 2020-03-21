#pragma once

#include "packet_field_definitions.h"
#include "crc32.h"
#include <windows.h> // for Sleep function

int const CRC_BYTE1_POSITION = 19;
int const CRC_BYTE2_POSITION = 18;
int const CRC_BYTE3_POSITION = 17;
int const CRC_BYTE4_POSITION = 16;

uint32_t CalculateCrc32 (uint8_t const* uartPacketTable, int length);
