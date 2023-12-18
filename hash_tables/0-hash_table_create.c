#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	hash_node_t **h_node;

	if (size == 0)
		return (NULL);

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	h_node = malloc(size * sizeof(hash_node_t *));
		if (h_node == NULL)
		{
			free(newtable);
			return (NULL);
		}
	newtable->size = size;
	newtable->array = h_node;

	return (newtable);
}
