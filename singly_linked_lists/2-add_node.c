#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node to the start of a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @str: String of characters to assign to the new node.
 * Return: A pointer to the new node created if successful.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

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
	new->next = *head;
	*head = new;
		return (new);
}
