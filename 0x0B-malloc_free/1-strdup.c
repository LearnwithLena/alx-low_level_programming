#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to duplicate string
 * @str: string
 * Return: NULL if str == NULL
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	return (strdup(str));
}
