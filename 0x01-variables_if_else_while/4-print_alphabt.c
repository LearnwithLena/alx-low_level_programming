#include <stdio.h>

/** 
 * main - Prints lower case alphabets except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	/* Print lower case alphabets */

	for (i = 0; i < 26; i++)
	{
		/* Checks if the letter is q or e */
		if ((putchar(alpha[i]) != 'q') && (putchar(alpha[i]) != 'e' ))
		{
			putchar(alpha[i]);
		}
		
		/* Print new line */
		putchar('\n');
	}

	return (0);
}
