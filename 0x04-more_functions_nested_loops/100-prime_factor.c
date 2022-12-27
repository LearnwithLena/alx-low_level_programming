#include <stdio.h>

/**
 * main - print largest num = 6128525143
 * Return: 0 Success
 */

int main(void)
{
	long int num = 612852475143;
	long int div;

	for (div = 2; div <= num; div++)
	{
		if (num % div == 0)
		{
			num /= div;
			div--;
		}

	}
	printf("%ld\n", num);
	return (0);
}
