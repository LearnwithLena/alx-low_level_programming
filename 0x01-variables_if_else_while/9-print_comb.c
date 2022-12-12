#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num = '0';

	/* Loops through the numbers as strings */
	for (num = '0'; num <= '9'; num++)
	{
		if (num != '9')
		{
		putchar(num);
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
