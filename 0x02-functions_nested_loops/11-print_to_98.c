#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints the given number to 98
 * @n: Number to be entered
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}


	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);

}
