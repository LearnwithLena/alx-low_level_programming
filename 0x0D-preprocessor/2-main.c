#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from
 * @argc: Number of command line inputs
 * @argv: Array of inputs
 * Return: 0 if success, prints name of file
 *
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return(0);
}
