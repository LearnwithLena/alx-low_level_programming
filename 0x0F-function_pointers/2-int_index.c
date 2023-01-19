#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an int,
 *		returns the first element for which cmp !return 0
 * @array: array of integers
 * @size: size of array, i.e number of elements in the array
 * @cmp: pointer to cmp function that compares values
 * Return: index of the first element, or -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	}
	return (-1);
}
