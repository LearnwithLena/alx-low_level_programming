#include <stdio.h>
#include <string.h>

/**
 * main - print the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
