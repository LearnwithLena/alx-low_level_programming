#include "main.h"

/**
 * main-check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return(0);
}

void print_alphabet(void) {
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
