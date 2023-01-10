#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, initialise with specific char
 * @size: size of char
 * @c: char
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
