#include "module.h"

Module::Module()
{

}

void Module::enableParameter(int index)
{
    parameters[index] = true;
}

void Module::disableParameter(int index)
{
    parameters[index] = false;
}

void Module::setParameter(int index, float value)
{
    values[index] = value;
}

bool Module::getParameterState(int index)
{
    return parameters[index];
}

float Module::getParameterValue(int index)
{
    return values[index];
}
