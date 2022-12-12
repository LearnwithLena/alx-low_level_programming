#include <stdio.h>

/**
 * main- Print two digit numbers with spaces
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens1;
	int unit1;
	int tens2;
	int unit2;

	for (tens1 = '0'; tens1 <= '9'; tens1++)
	{
		for (units1 = tens1 + 1; units1 <= '9'; units1++)
		{
			for (tens2 = '0'; tens2 <= '9'; tens2++)
			{
				for (units2 = tens2 + 1; units2 <= '9'; units2++)
				{
					putchar(tens1);
					putchar(units1);
					putchar(' ');
					putchar(tens2);
					putchar(units2);

					if (!((tens1 == '9' && units1 == '8') && (tens2 == '9' && units2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
