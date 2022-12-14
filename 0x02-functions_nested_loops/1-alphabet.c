#include "main.h"

/**
 * Print lowercase letters
 *
 * Return: Always 0.
 */
void print_alphabet(void) {
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
