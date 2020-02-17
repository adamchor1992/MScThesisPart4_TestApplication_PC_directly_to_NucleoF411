#pragma once

#include "defines.h"

class Module
{
public:
    void enableParameter(Parameter parameter);
    void enableParameterByIndex(int index);
    void disableParameter(Parameter parameter);
    void disableParameterByIndex(int index);
    void setParameter(Parameter parameter, double value);
    void setParameterByIndex(int index, double value);
    bool getParameterState(int index);
    double getParameterValue(int index);
    bool* getParameterStatesTable();
    double* getParameterValuesTable();

private:
    bool parameterStates[PARAMETER_COUNT] {false};
    double parameterValues[PARAMETER_COUNT] {0.0};
};
