#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 *
 * @c: character to search
 *
 * Return: pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
