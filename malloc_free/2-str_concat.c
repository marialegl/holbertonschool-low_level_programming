#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer.
 * @s2: pointer.
 * Return: pointer to new string, NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}
	strcat(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
}
