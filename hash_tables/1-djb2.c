#include "hash_tables.h"

/**
 * hash_djb2 - implements the DJB2. It is a simple and efficient
 *	hashing algorithm used to generate a hash value
 *	from a string of characters.
 * @str: Pointer to the string of characters for which
 *	the hash will be calculated.
 * Return: Hash value (unsigned long int) calculated
 *	from the input string.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
