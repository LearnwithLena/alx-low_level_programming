#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - find the number of nodes in a linked list
 * @h: pointer to head of linked list to find size
 *
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return(nodes);
}
