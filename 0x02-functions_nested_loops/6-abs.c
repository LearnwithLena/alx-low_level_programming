#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _abs - Changes a number to an absolute value
 * Return: absolute number success
 * @num: Number to be checked
 */

int _abs(int num)
{
	int new; /* Absolute number */

	new = abs(num);
	return (new);
}
