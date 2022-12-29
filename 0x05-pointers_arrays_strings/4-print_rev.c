#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints in reverse
 * @s: String to reverse
 * Return: None
 */

void print_rev(char *s)
{
	int len, count;

	len = strlen(s);

	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
