#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0 success, else print Error\n and return 1
 */

int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;
	printf("%d\n", mult);
	return (0);
}
