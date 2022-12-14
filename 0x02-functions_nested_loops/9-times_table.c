#include "main.h"
/**
 * times_table - Prints the 9 times table starting from 0
 */

void times_table(void)
{
	int column;
	int row;

	for (column = '0'; column < '10'; column++)
	{
		for (row = '0''; row < '10''; row++)
		{
			putchar(column * row);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
}
