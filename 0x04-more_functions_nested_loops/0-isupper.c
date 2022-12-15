#include "main.h"
#include <ctype.h>
/**
 * _isupper - Prints if the character is uppercase
 * @c: The character
 * Return: 1 if uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c)) /* If character is upper */
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
