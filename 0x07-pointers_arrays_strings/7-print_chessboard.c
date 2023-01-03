#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 *
 * @a: number of rows
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 &&  i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
