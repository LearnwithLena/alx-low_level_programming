#include <stdio.h>

/**
 * main- Prints the leters of the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	for (int x = 'A', x <= 'Z', x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
