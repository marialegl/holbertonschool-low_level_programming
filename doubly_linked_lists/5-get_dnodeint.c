#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - frees a dlistint list.
 * @head: Pointer of the first node in the list.
 * @index: index of the node, starting from 0.
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		if (node_count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		node_count++;
	}
	return (NULL);
}
