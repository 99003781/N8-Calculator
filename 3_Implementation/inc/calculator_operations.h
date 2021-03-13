/** 
* @file calculator_operations.h
* Calculator application mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
///#include <stdio_ext.h>
#include<math.h>
#include<string.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
float add(float num1, float num2);


/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
float subtract(float num1, float num2);


/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
float multiply(float num1, float num2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
float divide(float num1, float num2);


/**
* returns percentage of a number 
* @param[in] operand1 
* @param[in] operand2 
* @return float value of the operand1 % operand2
* @note returns 0 for percentage
*/
float percentage (float num1, float num2);


/**
* Calculate gcd of a number
* @param[in] operand1 
* @param[in] operand2 
* @return float value of gcd of two number
* @note returns 0 otherwise
*/
int gcd(int num1, int num2);


/**
* gives remainder of a number
* @param[in] operand1 
* @param[in] operand2 
* @return float value of remainder of a number
*/
int rem(int num1, int num2);


/**
* Calculate power of a number
* @param[in] operand1 
* @param[in] operand2 
* @return float value of gcd of a number
* @note returns 0 for power 1
*/
int power(int num3, int num4);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
