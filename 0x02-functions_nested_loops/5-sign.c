#include <main.h>
#include <stdio.h>

/**
 * print_sign - Prints if a number is 0, less or greater than
 * @n: The number to be checked
 * Return: 1 if greater than zero, 0 if zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
