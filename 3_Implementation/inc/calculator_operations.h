/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations.
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include<math.h>
#include<string.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1
* @param[in] operand2
* @return Result of operand1 + operand2
*/
float add(float num1, int num2);

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
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
float divide(float num1, float num2);
/**
*calculate percentage of number1 wrt number2
**/
float percentage (float num1, float num2);

/**
* divides the operand1 by operand2 and returns the result 
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>



/**
*  entered binary number is converted to decimal 
* @param[in]  binary num
* @return decimal num


*/
int bintodec(long long n);


/**
*  entered decimal number is converted to octal
* @param[in] decimal

* @return octal
*/
 int long octtodec()

long octtodec(int oct);
/**
*  entered Binary number is converted to octal
* @param[in] Binary

* @return octal
*/
int bintooct(long long b);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
