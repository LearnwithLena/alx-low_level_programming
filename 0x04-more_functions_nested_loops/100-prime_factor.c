#include <stdio.h>

/**
 * main - print largest num = 6128525143
 * Return: 0 Success
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div = 2;
	for  (div = 2; div <= num; div++
	{
		if (num % div == 0)
		{
			num /= div;
			div--;
		}

	}
	printf("%lu\n", num);
	return (0);
}
