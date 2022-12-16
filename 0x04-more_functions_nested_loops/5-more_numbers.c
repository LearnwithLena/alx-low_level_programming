#include "main.h"

/**
 * more_numbers - Prints more numbers
 * Return: void
 */

void more_numbers(void)
{
	int row;
	int column;

	for (row = 0; row < 11; row++)
	{
		for (column = 0; column < 15; column++)
		{
			if (column >= 10)
			{
				_putchar((column / 10) + '0'); /*First digit */
			}
				_putchar((column % 10) + '0'); /*Last digit */
		}
		_putchar('\n')
	}
}
