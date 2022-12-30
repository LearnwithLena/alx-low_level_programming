#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * 
 * @src: source string
 *
 * @dest: destination string
 *
 * @n: bytes from source
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
