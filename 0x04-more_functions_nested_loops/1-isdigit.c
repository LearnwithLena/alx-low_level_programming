#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Prints if character is a digit
 * @c: Character to be tested
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
