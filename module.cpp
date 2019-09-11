#include "module.h"

Module::Module()
{

}

void Module::enableParameter(int index)
{
    parameterStates[index] = true;
}

void Module::disableParameter(int index)
{
    parameterStates[index] = false;
}

void Module::setParameter(int index, float value)
{
    parameterValues[index] = value;
}

bool Module::getParameterState(int index)
{
    return parameterStates[index];
}

double Module::getParameterValue(int index)
{
    return parameterValues[index];
}

bool* Module::getParameterStatesTable()
{
    return parameterStates;
}

double* Module::getParameterValuesTable()
{
    return parameterValues;
}
