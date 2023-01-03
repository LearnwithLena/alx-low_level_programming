#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory are
 * @n: number of bytes
 * Return: a pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
