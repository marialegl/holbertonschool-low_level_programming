#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node to the end of a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @str: String of characters to assign to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p;

	new = malloc(sizeof(list_t));
	p = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		p = *head;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}
