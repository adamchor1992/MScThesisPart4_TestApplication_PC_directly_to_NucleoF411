#ifndef MODULE1_H
#define MODULE1_H


class Module
{
public:
    Module();
    void enableParameter(int index);
    void disableParameter(int index);
    void setParameter(int index, float value);
    bool getParameterState(int index);
    float getParameterValue(int index);

private:
    bool parameters[10] {false};
    float values[10] {0.0};
};

#endif // MODULE1_H
