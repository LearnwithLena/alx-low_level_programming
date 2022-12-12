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
		for (unit1 = '0'; unit1 <= '9'; unit1++)
		{
			for (tens2 = tens1; tens2 <= '9'; tens2++)
			{
				for (unit2 = unit1 + 1; unit2 <= '9'; unit2++)
				{
					putchar(tens1);
					putchar(unit1);
					putchar(' ');
					putchar(tens2);
					putchar(unit2);

					if (!((tens1 == '9' && unit1 == '8') && (tens2 == '9' && unit2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				unit2 = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
