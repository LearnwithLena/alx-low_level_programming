#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Checks if the character is an alphabet
 * @c: Character to be checked
 * Return: 1 if c is a letter, lowercase or upperase, 0 if otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
