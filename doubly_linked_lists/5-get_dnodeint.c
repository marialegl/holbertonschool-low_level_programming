#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - frees a dlistint list.
 * @head: Pointer of the first node in the list.
 * @index: index of the node, starting from 0.
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
