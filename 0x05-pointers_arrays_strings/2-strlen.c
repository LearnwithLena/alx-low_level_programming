#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Checks the lenth of a string
 * @s: String to be checked
 * Return: The length of the string of type int
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0') /* The dereferenced char isnt the empty space */
	{
		s++ /* Inreases the pointer address by one */
		count++ /* Increase the counter by one */
	}

	return (count);
}
