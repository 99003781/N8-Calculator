#include <calculator_operations.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

float gcd(float a, float b)
{
    if (b==0)
        return a;
    else
        return gcd(b, a%b);
}

float add(float num1, int num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    if(0 == num2)
        return 0;
    else
        return num1 / num2;
}
float percentage(float num1, float num2);
{
    if(0==num2)
        return 0;
    else
        return (num1/num2)*100;
}
