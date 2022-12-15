#include <stdio.h>

/**
 * main- Prints sum of fibonacci sequence up to 4, 000, 000
 * Return: 0 Success
 */

int main(void)
{
	int sum_even = 0;
	int num1 = 1;
	int num2 = 1;
	int sum = 1;

	while (num2 < 4000000)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_even += sum;
	}
	printf("%d\n", sum_even);

	return (0);
}
