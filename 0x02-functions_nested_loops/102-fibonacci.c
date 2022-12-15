#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0 Success
 */

int main(void)
{
	long num1 = 1;
	long num2 = 2;
	int count;
	long sum;

	printf("%ld, %ld", num1, num2); /* Print first two numbers */

	for (count = 0; count < 48; count++) /* Counts through the other 48 */
	{
		sum = num1 + num2;
		printf(", %ld", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}

