#include "main.h"

/**
 * print_triangle - prints triangle of size n
 * @size: sizeof triangle
 * Return: 0 Sucess
 */

void print_triangle(int size)
{
	int row;
	int space;
	int column;

	for (row = 0; row < size; row++)
	{
		for (space = 0; space < size - row - 1; space++)
		{
			_putchar(' ');
		}

		for (column = 0; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
