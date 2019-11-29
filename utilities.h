#pragma once

#include "uartpacket.h"
#include "crc32.h"
#include <cmath>
#include <windows.h> // for Sleep
#include "crc32.h"

uint32_t calculateCrc32 (char *data, int len);
bool checkCrc32(const uint8_t uartPacketTable[]);
void appendCrcToPacketTable(uint8_t packet[]);

