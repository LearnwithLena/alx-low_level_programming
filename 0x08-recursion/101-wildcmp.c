#include <stdio.h>
#include <string.h>

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: Second string
 * Return: 1 if identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	int res = strcmp(s1, s2);

	if (res == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
