#include "utilities.h"
#include "QDebug"

uint32_t CalculateCrc32 (char* data, int len)
{
    uint32_t crc = 0xFFFFFFFF;

    while (len--)
    {
        crc = (crc << 8) ^ crcTable[((crc >> 24) ^ *(reinterpret_cast<uint32_t*>(data++))) & 0xFF];
    }

    return crc;
}

bool CheckCrc32(uint8_t const uartPacketTable[])
{
    uint8_t crcValueReceivedRaw8Bit[4] = {0};
    uint32_t crcValueCalculated = 0;
    uint32_t crcValueReceived = 0;

    crcValueCalculated = CalculateCrc32(reinterpret_cast<char*>(const_cast<uint8_t*>(uartPacketTable)), PACKET_SIZE_WITHOUT_CRC);

    crcValueReceivedRaw8Bit[0] = uartPacketTable[16];
    crcValueReceivedRaw8Bit[1] = uartPacketTable[17];
    crcValueReceivedRaw8Bit[2] = uartPacketTable[18];
    crcValueReceivedRaw8Bit[3] = uartPacketTable[19];

    crcValueReceived = static_cast<uint32_t>(crcValueReceivedRaw8Bit[3] | crcValueReceivedRaw8Bit[2] << 8 | crcValueReceivedRaw8Bit[1] << 16 | crcValueReceivedRaw8Bit[0] << 24);

    qDebug("CRC Calculated: %d", crcValueCalculated);
    qDebug("CRC Received: %d", crcValueReceived);

    if(crcValueCalculated == crcValueReceived)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void AppendCrcToPacketTable(uint8_t uartPacketTable[])
{
    uint32_t crcValueCalculated = CalculateCrc32(reinterpret_cast<char*>(uartPacketTable), 16);
    uint32_t* crcAddress = &crcValueCalculated;
    uint8_t* p1 = nullptr;
    uint8_t* p2 = nullptr;
    uint8_t* p3 = nullptr;
    uint8_t* p4 = nullptr;

    p1 = reinterpret_cast<uint8_t*>(crcAddress);
    p2 = reinterpret_cast<uint8_t*>(crcAddress) + 1;
    p3 = reinterpret_cast<uint8_t*>(crcAddress) + 2;
    p4 = reinterpret_cast<uint8_t*>(crcAddress) + 3;

    uartPacketTable[19] = *p1;
    uartPacketTable[18] = *p2;
    uartPacketTable[17] = *p3;
    uartPacketTable[16] = *p4;
}
