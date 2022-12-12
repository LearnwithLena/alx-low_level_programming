#include <stdio.h>

/**
 * main - Prints upper and lowercase alphabets with putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char u_alphabets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l_alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	/* Prints lower case */
	for (i = 0; i < 26; i++)
	{
		putchar(l_alphabets[i]);
	}

	/* Prints upper case */
	for (i = 0; i < 26; i++)
	{
		putchar(u_alphabets[i]);
	}

	/* Print new line */
	putchar('\n');

	return (0);
}
