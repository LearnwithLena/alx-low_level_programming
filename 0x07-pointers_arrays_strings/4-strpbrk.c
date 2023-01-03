#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches string for the first occurence of any of a set of bytes
 *
 * @s: string
 *
 * @accept: any of the bytes in this string
 *
 * Return: pointer to the byte in s that matches bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
