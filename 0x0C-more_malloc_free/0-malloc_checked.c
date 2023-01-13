#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *r;

	r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
