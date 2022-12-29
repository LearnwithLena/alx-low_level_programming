#include "main.h"

/**
 * swap_int - swaps integers
 * @a: First integer
 * @b: Second integer
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int c;
	int *temp;

	temp = &c;
	*temp = *a;
	*a = *b;
	*b = *temp;
}
