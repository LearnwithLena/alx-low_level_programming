#include "main.h"

/**
 * print_diagonal - print lines diagonally
 * @n: Number of lines to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int row;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

