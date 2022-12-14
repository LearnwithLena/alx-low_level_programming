#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * int _islower - Prints if a character is lowercase
 *
 * Returns 1 if lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	/**
	 * _islower: Checks if character is lowercase
	 * @c is character to be checked
	 * returns 1 or 0
	 */

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

