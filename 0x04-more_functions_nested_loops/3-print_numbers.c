#include "main.h"

/**
 *print_numbers - Prints numbers 1 t0 9
 *Return: void
 */

void print_numbers(void)
{
	int num = '0';

	for (num = '0'; num <= '9''; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
