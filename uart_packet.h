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
    void SetSource(char source);
    void SetModule(ModuleID module);
    void SetModule(char module);
    void SetFunction(Function function);
    void SetFunction(char function);
    void SetParameter(Parameter parameter);
    void SetParameter(char parameter);
    void SetSign(Sign sign);
    void SetSign(char sign);
    void SetLength(Length length);
    void SetLength(int length);

    /*This function merely copies structure fields to table elements, no additional logic included*/
    void ConvertToUartPacketTable(uint8_t uartPacketTable[]);

    Source GetSource() const;
    ModuleID GetModule() const;
    Function GetFunction() const;
    Parameter GetParameter() const;
    Sign GetSign() const;
    uint8_t* GetPayloadPointer();

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
