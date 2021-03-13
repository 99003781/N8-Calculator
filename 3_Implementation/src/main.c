//Trignomatry
#include <main.h>
double sin_func(double radian);
double cos_func(double radian);
double tan_func(double radian);
double cosec_func(double radian);
double sec_func(double radian);
double cot_func(double radian);

// Trignoamtry Equation function

    double sin_func(double radian)
    {
        double Result;
        Result=sin(radian);
        return Result;
    }

    double cos_func(double radian)
    {
       double Result;
       Result= cos(radian);
       return Result;
    }
    double tan_func(double radian)
    {
        double Result;
        Result=tan(radian);
        return Result;
    }
    double cosec_func(double radian)
    {
        double Result;
        Result=(1/(sin(radian)));
        return Result;
    }
    double sec_func(double radian)
    {
        double Result;
        Result=(1/(cos(radian)));
        return Result;
    }
    double cot_func(double radian)
    {
        double Result;
        Result=(1/(tan(radian)));
        return Result;
    }