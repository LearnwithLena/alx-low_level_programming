#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: beginning of the list
 *
 * Return: head nodes data as int
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
