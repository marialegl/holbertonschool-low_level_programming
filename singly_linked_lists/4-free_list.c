#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: Pointer of the first node in the list.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
