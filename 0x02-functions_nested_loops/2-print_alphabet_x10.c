#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabets ten times
 *
 * Return: 0 success
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;
	/* Loops ten times */
	for (count = 0; count < 10; count++)
	{
		/* Prints lowercase letters */
		for (letter = 'a', letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}
}
