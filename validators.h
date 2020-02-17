#pragma once

#include <defines.h>

#include <QValidator>
#include <QDebug>

class CustomFloatingPointValidator : public QValidator
{
public:
    CustomFloatingPointValidator();

private:
    virtual QValidator::State validate(QString &input, int &pos) const override;

    QString m_FloatingPointValidatorPattern;
    QRegExp m_RegExp;
};

class CustomIntegerValidator : public QValidator
{
public:
    CustomIntegerValidator();

private:
    virtual QValidator::State validate(QString &input, int &pos) const override;

    QString m_IntValidatorPattern;
    QRegExp m_RegExp;
};
