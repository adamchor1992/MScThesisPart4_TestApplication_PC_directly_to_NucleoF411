#pragma once

#include "uartpacket.h"
#include "crc32.h"
#include <cmath>
#include <assert.h>
#include <windows.h> // for Sleep
#include "crc32.h"

void convertUartPacketTableToUartStructure(const uint8_t uartPacketTable[], UartPacket & uartPacket);
void convertUartStructureToUartPacketTable(const UartPacket & uartPacket, uint8_t uartPacketTable[]);
uint32_t calculateCrc32 (char *data, int len);
void appendCrcToPacket(uint8_t packet[]);
