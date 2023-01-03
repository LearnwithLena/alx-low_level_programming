#include <stdio.h>
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: Character
 * @b: Constant byte
 * @n: first n bytes of the memory are
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
