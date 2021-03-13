#include <calculator_operations.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
int temp;

//******************ADDITION FUNCTION****************************//

float add(float num1, float num2)
{
    return num1 + num2;
}

//******************SUBTRACTION FUNCTION****************************//

float subtract(float num1, float num2)
{
    return num1 - num2;
}

//******************MULTIPLICATION FUNCTION****************************//

float multiply(float num1, float num2)
{
    return num1 * num2;
}

//******************DIVISION FUNCTION****************************//

float divide(float num1, float num2)
{
    if(0 == num2)
        return 0;
    else
        return (num1 / num2);
}
//******************GCD FUNCTION****************************//
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

//******************PERCENTAGE FUNCTION****************************//

float percentage(float num1, float num2)
{
    if(0 == num2)
        return 0;
    else
        return (num1/num2)*100;
}

//******************REMAINDER FUNCTION****************************//

int rem(int num3, int num4)
{   int temp = num3 % num4;
    return temp ;
}

//******************POWER FUNCTION****************************//

int power(int num3, int num4)
{
    return (pow(num3,num4));
}
