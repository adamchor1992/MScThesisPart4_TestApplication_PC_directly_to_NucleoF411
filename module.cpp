#include "module.h"

#include <QString>
#include <QMessageBox>

void Module::enableParameter(Parameter parameter)
{
    switch(parameter)
    {
    case Parameter::PARAMETER1:
        enableParameterByIndex(0);
        break;
    case Parameter::PARAMETER2:
        enableParameterByIndex(1);
        break;
    case Parameter::PARAMETER3:
        enableParameterByIndex(2);
        break;
    case Parameter::PARAMETER4:
        enableParameterByIndex(3);
        break;
    case Parameter::PARAMETER5:
        enableParameterByIndex(4);
        break;
    case Parameter::PARAMETER6:
        enableParameterByIndex(5);
        break;
    case Parameter::PARAMETER7:
        enableParameterByIndex(6);
        break;
    case Parameter::PARAMETER8:
        enableParameterByIndex(7);
        break;
    case Parameter::PARAMETER9:
        enableParameterByIndex(8);
        break;
    case Parameter::PARAMETER10:
        enableParameterByIndex(9);
        break;
    default:
        QString errorMessage;

        char wrongValue = char(parameter);

        errorMessage = QString("Wrong parameter field in received packet. Value: ") + QString(wrongValue);

        QMessageBox::warning(nullptr, "Incorrect packet", errorMessage);
    }
}

void Module::enableParameterByIndex(int index)
{
    parameterStates[index] = true;
}

void Module::disableParameter(Parameter parameter)
{
    switch(parameter)
    {
    case Parameter::PARAMETER1:
        disableParameterByIndex(0);
        break;
    case Parameter::PARAMETER2:
        disableParameterByIndex(1);
        break;
    case Parameter::PARAMETER3:
        disableParameterByIndex(2);
        break;
    case Parameter::PARAMETER4:
        disableParameterByIndex(3);
        break;
    case Parameter::PARAMETER5:
        disableParameterByIndex(4);
        break;
    case Parameter::PARAMETER6:
        disableParameterByIndex(5);
        break;
    case Parameter::PARAMETER7:
        disableParameterByIndex(6);
        break;
    case Parameter::PARAMETER8:
        disableParameterByIndex(7);
        break;
    case Parameter::PARAMETER9:
        disableParameterByIndex(8);
        break;
    case Parameter::PARAMETER10:
        disableParameterByIndex(9);
        break;
    default:
        QString errorMessage;

        char wrongValue = char(parameter);

        errorMessage = QString("Wrong parameter field in received packet. Value: ") + QString(wrongValue);

        QMessageBox::warning(nullptr, "Incorrect packet", errorMessage);
    }
}

void Module::disableParameterByIndex(int index)
{
    parameterStates[index] = false;
}

void Module::setParameter(Parameter parameter, double value)
{
    switch(parameter)
    {
    case Parameter::PARAMETER1:
        setParameterByIndex(0, value);
        break;
    case Parameter::PARAMETER2:
        setParameterByIndex(1, value);
        break;
    case Parameter::PARAMETER3:
        setParameterByIndex(2, value);
        break;
    case Parameter::PARAMETER4:
        setParameterByIndex(3, value);
        break;
    case Parameter::PARAMETER5:
        setParameterByIndex(4, value);
        break;
    case Parameter::PARAMETER6:
        setParameterByIndex(5, value);
        break;
    case Parameter::PARAMETER7:
        setParameterByIndex(6, value);
        break;
    case Parameter::PARAMETER8:
        setParameterByIndex(7, value);
        break;
    case Parameter::PARAMETER9:
        setParameterByIndex(8, value);
        break;
    case Parameter::PARAMETER10:
        setParameterByIndex(9, value);
        break;
    default:
        QString errorMessage;

        char wrongValue = char(parameter);

        errorMessage = QString("Wrong parameter field in received packet. Value: ") + QString(wrongValue);

        QMessageBox::warning(nullptr, "Incorrect packet", errorMessage);
    }
}

void Module::setParameterByIndex(int index, double value)
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
