#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the pointer of the first node in the list.
 * @n: String of characters to assign to the new node.
 * Return: A pointer to the new node created if successful.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;
		return (new);
}
