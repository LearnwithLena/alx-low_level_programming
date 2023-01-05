#include "main.h"

/**
 * _sqrt_recursion - find natural square root of a number
 * @n: number
 * @sqr: square
 * Return: square root
 */

int _sqrt_recursion(int n, int sqr)
{
	if (n * n == sqr)
	{
		return (n);
	}
	if (n * n > sqr)
	{
		return (-1);
	}
	return (_sqrt_recursion(n + 1, sqr));
}
