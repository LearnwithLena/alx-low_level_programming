#include "main.h"

/**
 * string_toupper - capitalise words in string
 *
 * @s: string
 *
 * Return: capitalised string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32; /* lowercase to uppercase in ASCII */
		}
	}
	return (s);
}
