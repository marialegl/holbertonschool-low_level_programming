#include "hash_tables.h"

/**
  * key_index - This function calculates the index in which the key/value
  *	pair should be stored in the hash table array using
  *	the hash_djb2 function.
  * @key: Pointer to the key for which the index will be calculated.
  * @size: Hash table array size.
  * Return: Index in which the key/value pair should be stored.
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
