#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the beginning of the node
 * @index: index of the node
 *
 * Return: the nth node of NULL if not does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (head);
}
