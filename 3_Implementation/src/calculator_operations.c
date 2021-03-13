#include <calculator_operations.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int temp;

float add(float num1, float num2)
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
        return (num1 / num2);
}

int gcd(int num3, int num4)
{
    {
    while (num3 != num4)
    {
        if (num3 > num4)
        {
            return gcd((num3 - num4), num4);
        }
        else
        {
            return gcd(num3, (num4 - num3));
        }
    }
    return num3;
}
    // if (num3==0)
    //     return num3;
    // else
    // {   
    //     int temp = (num3 % num4);
    //     return gcd(num3, temp);
    // }
}

float percentage(float num1, float num2)
{
    if(0 == num2)
        return 0;
    else
        return (num1/num2)*100;
}

int rem(int num3, int num4)
{   int temp = num3 % num4;
    return temp ;
}

int power(int num3, int num4)
{
    return (pow(num3,num4));
}