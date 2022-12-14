#include <stdio.h>
#include <string.h>

/**
 * main - Print putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char sentence [] = "_putchar";
	while (i < 8)
	{
		putchar(sentence[i]);
		i++;
	}

	putchar('\n');
	return (0);
}
