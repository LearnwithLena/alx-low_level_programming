#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints in reverse followed by a new line
 * @s: String
 * Return: None
 */

void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = strlen(s); /* Length of string*/

	/* Set the beginning to start */
	start = s;

	/* Set the end of the string */
	end = s + len - 1;


	/* Swap characters */
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		/* Update pointer position */
		start++;
		end--;
	}
}
