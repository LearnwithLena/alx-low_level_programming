#include "main.h"

/**
 * sqrt_find - find natural square root of a number
 * @n: number
 * @sqr: square
 * Return: square root
 */

int sqrt_find(int n, int sqr)
{
	if (n * n == sqr)
	{
		return (n);
	}
	if (n * n > sqr)
	{
		return (-1);
	}
	return (sqrt_find(n + 1, sqr));
}

/**
 * _sqrt_recursion - print natural square root
 * @n: the given number
 * Return: -1 if not a natural number else the number
 */

int _sqrt_recursion(int n)
{
	if (n != 0)
		return (sqrt_find(1, n));
	return (0);
}
