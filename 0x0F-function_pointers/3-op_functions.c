#include "3-calc.h"

/**
 * op_add - Sum of two ints
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference between two ints
 * @a: first int
 * @b: second int
 *
 * Return: Difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Product of two ints
 * @a: first int
 * @b: second int
 *
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Division of two ints
 * @a: first int
 * @b: second int
 *
 * Return: Result of division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - Modulus or Remainder of Division of two ints
 * @a: first int
 * @b: second int
 *
 * Return: Modulus or remainder of  a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
