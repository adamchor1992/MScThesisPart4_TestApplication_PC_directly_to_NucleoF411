#pragma once

#include "uart_packet.h"
#include "crc32.h"
#include <cmath>
#include <windows.h> // for Sleep
#include "crc32.h"

uint32_t CalculateCrc32 (char *data, int len);
bool CheckCrc32(uint8_t const uartPacketTable[]);
void AppendCrcToPacketTable(uint8_t packet[]);
