#include "main.h"

/**
 * print_line - Prints line n number of times
 * @n: Number of lines to be printed
 * Return: void
 */

void print_line(int n)
{
	int lines;

	for (lines = 0; lines < n; lines++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar('_');
	}
	_putchar('\n');
}
