#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: character 
 * Return: non
 */

void print_chessboard(char(*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j);
		}
		_putchar('\n');
	}
}
