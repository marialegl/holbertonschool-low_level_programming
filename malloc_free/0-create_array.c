#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c.
 * description: creat array of size size and assign char c.
 * @size: Number integer no negative.
 * @c: character.
 * Return: pointer to array, NULL if fail.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
