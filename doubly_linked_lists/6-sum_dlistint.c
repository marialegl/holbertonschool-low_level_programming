#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a doubly linked list.
 * @head: Pointer to the first node in the list.
 * Return: Sum of the list data. If the list is empty, it returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
