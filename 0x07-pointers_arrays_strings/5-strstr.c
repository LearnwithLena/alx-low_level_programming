#include <stdio.h>
#include <string.h>

/**
 * _strstr - finds the first occurence of a substring in a string
 *
 * @haystack: string
 *
 * @needle: substring
 *
 * Return: pointer to the beginning of needle or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
