#include <stdio.h>

/** 
 * main - Prints lower case alphabets except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	/* Print lower case alphabets */
	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		/* Checks if the letter is q or e */
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('/n');

	return (0);
}
