#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *a;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		a[r] = str[r];

	free(a);

	return (a);
}
