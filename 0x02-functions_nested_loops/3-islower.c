#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - Prints if a character is lowercase
 *
 * @c: is character to be checked
 * Return: 1 if lowercase, 0 if otherwise
 */

int _islower(int c)
{

	if (islower(c))
	{
		/* Returns 1 if lowercase alphabet */
		return (1);
	}
	else
	{	/* Returns 0 if otherwise */
		return (0);
	}
}

