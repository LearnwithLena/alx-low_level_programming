#include <stdio.h>

/**
 * main - Print a sentence without printf or puts
 *
 * Return: Always 1 (Success)
 *
 */
int main(void)
{
	int i = 0;
	char sentence[33] = "and that piece of art is useful\" ";
	char authour[25] = "- Dora Korpar, 2015-10-19";

	for (i = 0; i < 33; i++)
	{
		putchar(sentence[i]);
	}
	for (i = 0; i < 25; i++)
	{
		putchar(authour[i]);
	}

	putchar('\n');

	return (1);
}

/*
 * char str1[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19";
 * write(2, str1, 59);
 * return (1);
 * https://dextutor.com/write-read-system-call/
 */
