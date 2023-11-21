#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * array_range - creates an array of integers.
  * @min: minimum values (included).
  * @max: maximum values (included).
  * Return: the pointer to the newly created array.
  */
int *array_range(int min, int max)
{
	int *p;
	int i, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
