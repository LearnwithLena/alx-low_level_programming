#include "main.h"

/**
 * print_alphabet - print lowercase letters
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	/* Prints lower case alphabets */
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
