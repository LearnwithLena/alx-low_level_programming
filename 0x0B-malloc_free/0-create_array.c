#include <stdio.h>

/**
 * create_array - create an array of chars, initialise with specific char
 * @size: size of char
 * @c: char
 * Return: NULL if size = 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	c = malloc(size * sizeof(char));
	return (c[i]);
}
