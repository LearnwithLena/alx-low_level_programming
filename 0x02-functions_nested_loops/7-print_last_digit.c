#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number
 * @num: The number to be entered
 * Return: Return the modulus of the number by 10
 */

int print_last_digit(int num)
{
	if (num < 0)
	{
		num *= -1;
	}

	_putchar((num % 10) + '0');
	
	return (num % 10);
}
