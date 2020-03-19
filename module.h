#pragma once

#include "packet_field_definitions.h"

class Module
{
public:
    void EnableParameter(Parameter parameter);
    void EnableParameterByIndex(int index);
    void DisableParameter(Parameter parameter);
    void DisableParameterByIndex(int index);
    void SetParameter(Parameter parameter, double value);
    void SetParameterByIndex(int index, double value);
    bool GetParameterState(int index);
    double GetParameterValue(int index);
    bool* GetParameterStatesTable();
    double* GetParameterValuesTable();

private:
    bool m_ParameterStates[PARAMETER_COUNT] {false};
    double m_ParameterValues[PARAMETER_COUNT] {0.0};
};
