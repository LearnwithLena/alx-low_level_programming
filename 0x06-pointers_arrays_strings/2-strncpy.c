#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of bytes
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
