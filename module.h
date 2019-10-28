#pragma once

class Module
{
public:
    Module();
    void enableParameter(int index);
    void disableParameter(int index);
    void setParameter(int index, double value);
    bool getParameterState(int index);
    double getParameterValue(int index);
    bool* getParameterStatesTable();
    double* getParameterValuesTable();

private:
    bool parameterStates[10] {false};
    double parameterValues[10] {0.0};
};
