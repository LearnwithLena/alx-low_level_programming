#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: 0 if success, prints name of file
 *
 */

int main(void)
{
	if (argc)
	{
		printf("%s\n", __FILE__);
	}
	return(0);
}
