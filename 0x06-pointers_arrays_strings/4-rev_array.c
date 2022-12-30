#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the array
 *
 * @a: array of integers
 *
 * @n: number of elements of the array
 *
 * Return: none
 */

void reverse_array(int *a, int n);
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
