#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines the last digit of a random number and
 * prints if greater than five, zero, less than six and !zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Find the last digit with modulus */
	ld = n % 10;

	if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
