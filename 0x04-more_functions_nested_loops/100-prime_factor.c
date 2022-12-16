#include <stdio.h>

/**
 * main - print largest num = 6128525143
 * Return: 0 Success
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div = 2;

	while (div < num)
	{
		if (num % div == 0)
		{
			num /= divisor;
			div = 2;
		}
		div++;
	}
	printf("%lu\n", num);
	return (0);
}
