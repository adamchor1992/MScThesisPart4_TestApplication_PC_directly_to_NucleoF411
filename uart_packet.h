#pragma once

#include "packet_field_definitions.h"
#include <cstdint>

class UartPacket
{
public:
    UartPacket();
    /*Constructor initializing object to values from table*/
    UartPacket(const uint8_t uartPacketTable[]);

    void SetSource(Source source);
    void SetSource(uint8_t source);
    void SetModule(ModuleID module);
    void SetModule(uint8_t module);
    void SetFunction(Function function);
    void SetFunction(uint8_t function);
    void SetParameter(Parameter parameter);
    void SetParameter(uint8_t parameter);
    void SetSign(Sign sign);
    void SetSign(uint8_t sign);
    void SetLength(Length length);
    void SetLength(uint8_t length);
    void SetLengthAscii(uint8_t length);

    /*This function merely copies structure fields to table elements, no additional logic included*/
    void ConvertToUartPacketTable(uint8_t uartPacketTable[]);

    Source GetSource();
    ModuleID GetModule();
    Function GetFunction();
    Parameter GetParameter();
    Sign GetSign();
    uint8_t* GetPayload();

private:
    uint8_t m_Source;
    uint8_t m_Module;
    uint8_t m_Function;
    uint8_t m_Parameter;
    uint8_t m_Sign;
    uint8_t m_Length;
    uint8_t m_Payload[PAYLOAD_SIZE];
    uint8_t m_Crc[CRC_SIZE];
};
