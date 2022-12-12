#include <stdio.h>

/**
 * main - Print three numbers combo
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hund;
	int tens;
	int unit;

	for (hund = '0'; hund <= '9'; hund++)
	{
		for (tens = hund + 1; tens <= '9'; tens++)
		{
			for (unit = tens + 1; unit <= '9'; unit++)
			{
				putchar(hund);
				putchar(tens);
				putchar(unit);

				if (hund != '7' || tens != '8' || unit != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

