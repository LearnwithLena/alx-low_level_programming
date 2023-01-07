#include <stdio.h>

/**
 * main - prints the name of the programe
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
