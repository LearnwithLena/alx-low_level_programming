#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 to 100, fizz for multiples of three
 * buzz for multiple of 5
 * fizzbuzz for multiples of 3 and 5
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
