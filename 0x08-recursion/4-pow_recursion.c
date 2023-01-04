#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to y
 * @x: Number
 * @y: raised to the power
 * Return: Value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (pow(x, y));
}
