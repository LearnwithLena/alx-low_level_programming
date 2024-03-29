#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returnsthe number of elements in a linked list
 * @h: Head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
