#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * Description: Initializes it with a specific char.
 * @size: Number integer no negative.
 * @c: character.
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
