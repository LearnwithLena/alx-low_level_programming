#include "lists.h"

/**
 * sum_listint - sum of all the data in listint_t list
 * @head: beginning of the list
 * Return: sum of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
