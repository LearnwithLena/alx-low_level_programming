#include "main.h"

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of numbers as int
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;

	/*
	 * If sum is greater than 9, putchar prints only 0 - 9
	 * The double digits have to be printed one after the other.
	 * If sum <= 9, then it can be printed.
	 */

	if (sum > 9)
	{
		_putchar('0' + (sum / 10));
		_putchar('0' + (sum % 10));
	}
	else
	{
		_putchar('0' + sum);
	}
	_putchar('\n');
}
