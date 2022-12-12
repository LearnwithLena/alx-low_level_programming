#include <stdio.h>

/**
 * main - Prints all hexadecimals numbers 0 to 9, a to f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num = '0';
	char alpha = 'a';

	/* Print numbers 0 to 9 as strings */
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	/*
	 * While (num <= '9')
	 * {
	 * putchar(num);
	 * num++
	 */

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	/*
	 * While (alpha <= 'f')
	 * {
	 * putchar(alpha);
	 * alpha++
	 * }
	*/
	putchar('\n');
	return (0);
}
