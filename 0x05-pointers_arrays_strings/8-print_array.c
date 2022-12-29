#include "main.h"
#include <stdio.h>


/**
 * print_array - Prints array
 *
 * @a: pointer to array
 * @n: number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	_putchar('\n');
}
