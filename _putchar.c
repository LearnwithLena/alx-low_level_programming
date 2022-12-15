#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character to stdout
 * @c: The character to be printed
 * Return: 1 Succes
 * Error returns -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}	
