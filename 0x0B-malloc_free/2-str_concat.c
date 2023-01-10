#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: destination
 * @s2: source
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *y;
	unsigned int a, b, c, t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		;
	}
	y = malloc(sizeof(char) * (a + b + 1));

	if (y == NULL)
	{
		free(y)
		return (NULL);
	}

	for (c = 0; c < a; c++)
	{
		y[c] = s1[c];
	}
	t = b;
	for (b = 0; b <= t; c++, b++)
	{
		y[c] = s2[b];
	}
	return (y);
}
