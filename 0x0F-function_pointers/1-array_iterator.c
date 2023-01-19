#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to array
 * @size: number of elements in the array
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
