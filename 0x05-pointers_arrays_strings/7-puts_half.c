#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the last half of the string
 *
 * @str: String to be printed
 *
 * Return: None
 */

void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
