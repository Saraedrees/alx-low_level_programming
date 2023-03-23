#include <stdlib.h>
#include "calc.h"

/**
 * op_add - calculate the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: value of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: value of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: value of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: value of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: value of modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
