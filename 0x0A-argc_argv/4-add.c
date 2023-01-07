#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Add numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success, print Error\n and return 1 if symbol
 */

int main(int argc, char *argv[])
{
	int count, i, b;

	count = 0;

	for (i = 1; i < argc; i++)
	{

		for (b = 0; argv[i][b] != '\0'; b++)
		{
			if (!isdigit(argv[i][b]))
			{
				printf("Error\n");
				return (1);
			}

			count += atoi(argv[i]);
		}

	}
	printf("%d\n", count);
	return (0);
}
