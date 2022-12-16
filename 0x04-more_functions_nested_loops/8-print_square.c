#include "main.h"

/**
 * print_square - prints squares
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int row;
	int column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
