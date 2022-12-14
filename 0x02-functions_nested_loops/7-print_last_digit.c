#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number
 * @num: The number to be entered
 * Return: Return the modulus of the number by 10
 */

int print_last_digit(int num)
{
	int last_digit; /* Declaration for the last digit*/

	last_digit = num / 10;
	return (last_digit);
}
