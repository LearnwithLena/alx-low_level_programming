#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print every other character beginning from the first
 *
 * @str: The character to print
 *
 * Return: None
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str); /* length of string */

	/* Print first number but skip everyt other */
	for (i = 0; i < len; i = i + 2)
	{

		_putchar(str[i]); /* Prints the char at that index */
	}
	_putchar('\n'); /* Print new line */
}
