#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: pointer to head the dlistint.
  * Return: memory sizes.
  */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux = h;
	size_t node_count = 0;

	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
		node_count++;
	}
	return (node_count);
}
