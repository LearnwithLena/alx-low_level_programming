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

	if (size > 0)
	{

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
