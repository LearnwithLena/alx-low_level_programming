#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character to standard output
 *
 * @c: character to print
 *
 * Return: 1 success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
