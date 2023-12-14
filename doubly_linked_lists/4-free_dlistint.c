#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint list.
 * @head: Pointer of the first node in the list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
