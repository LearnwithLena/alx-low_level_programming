#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create an array of ints ordered min to max
 * @min: First value
 * @max: Last value
 * Return: NULL if min > max or error, else pointer to new array
 */

int *array_range(int min, int max)
{
	int i, len, *a;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	a = malloc(sizeof(int) * len);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
