#include "validators.h"

CustomFloatingPointValidator::CustomFloatingPointValidator()
{
    m_FloatingPointValidatorPattern = ("^[+-]?(?!0\\d)(\\d{1,10})(\\.\\d{1,8})?$");
    m_RegExp.setPattern(m_FloatingPointValidatorPattern);
}

QValidator::State CustomFloatingPointValidator::validate(QString &input, int &pos) const
{
    /*Supress unused parameter warning*/
    pos=0;

    /*Accept empty input string, its processing is blocked in another part of the application*/
    if(input.length() == 0)
    {
        return QValidator::Acceptable;
    }

    /*If matched then process string further*/
    if(m_RegExp.exactMatch(input))
    {
        QStringList matchedStrings = m_RegExp.capturedTexts();

        for(int i=0; i<matchedStrings.length(); i++)
        {
            qDebug() << "Match[" << i << "]:" << matchedStrings.at(i);
            qDebug() << "Matched length:" << m_RegExp.matchedLength();
        }

        int totalMatchLength = 0;

        for(int i=1; i<matchedStrings.length(); i++)
        {
            totalMatchLength += matchedStrings.at(i).length();
        }

        if(totalMatchLength <= PAYLOAD_SIZE)
        {
            return QValidator::Acceptable;
        }
        else
        {
            return QValidator::Invalid;
        }
    }
    /*String invalid*/
    else
    {
        return QValidator::Invalid;
    }
}

CustomIntegerValidator::CustomIntegerValidator()
{
    m_IntValidatorPattern = "^[+|-]?(0|[1-9][0-9]{0,9})$";
    m_RegExp.setPattern(m_IntValidatorPattern);
}

QValidator::State CustomIntegerValidator::validate(QString &input, int &pos) const
{
    /*Supress unused parameter warning*/
    pos=0;

    /*Accept empty input string, its processing is blocked in another part of the application*/
    if(input.length() == 0)
    {
        return QValidator::Acceptable;
    }

    /*If matched then process string further*/
    if(m_RegExp.exactMatch(input))
    {
        QStringList matchedStrings = m_RegExp.capturedTexts();

        for(int i=0; i<matchedStrings.length(); i++)
        {
            qDebug() << "Match[" << i << "]:" << matchedStrings.at(i);
            qDebug() << "Matched length:" << m_RegExp.matchedLength();
        }

        int totalMatchLength =  matchedStrings.at(1).length();

        if(totalMatchLength <= PAYLOAD_SIZE)
        {
            return QValidator::Acceptable;
        }
        else
        {
            return QValidator::Invalid;
        }
    }
    /*String invalid*/
    else
    {
        return QValidator::Invalid;
    }
}
