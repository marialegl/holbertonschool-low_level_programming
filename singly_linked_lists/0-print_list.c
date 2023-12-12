#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a structure.
 * @h: constant pointer to a structure.
 * Return: memory sizes.
 */
size_t print_list(const list_t *h)
{
	size_t node_count;
	const list_t *ptr;

	ptr = h;
	node_count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
