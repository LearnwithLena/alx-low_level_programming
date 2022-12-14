#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * c is the character to be printed
 * 
 * Return: Always 1 (success)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
