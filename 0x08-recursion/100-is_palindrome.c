#include "main.h"

/**
 * is_palindrome - checks if a string is a palinfrome
 * @s: string
 * Return: 1 if palindrome, 0 if its not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters recursively for palindorome
 * @s: string to check
 * @t: iterator
 * @l: length of string
 * Return: 1 if palindrom, else 0
 */

int check_pal(char *s, int t, int l)
{
	if (*(s + t) != *(s + l - 1))
	{
		return (0);
	}
	if (t >= 1)
	{
		return (1);
	}
	return (check_pal(s, t + 1, l - 1));
}
