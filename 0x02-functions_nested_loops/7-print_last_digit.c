#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number
 * @num: The number to be entered
 * Return: Return the modulus of the number by 10
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar((last_digit + '0');
	
	return (last_digit);
}
