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
	int *start, *end, temp; /* declare pointers to begin, endand temp */

	/* Set the start. */
	start = a;

	/* Set the end using pointer arithemtic. End is n-1 */
	end = a + (n - 1);

	/* Swap characters */
	for (i = 0; i < n / 2; i++)
	{
		temp = *end; /* Assign end to temp */
		*end = *start; /* Assign start of arra to end */
		*start = temp; /* Assign temp to deference start */
		/* Update pointer position. Move start forward and end back */
		start++;
		end--;
	}
}
