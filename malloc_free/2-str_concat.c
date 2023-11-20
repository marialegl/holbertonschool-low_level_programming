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
	int longA = strlen(s1);
	int longB = strlen(s2);
	int longC = longA + longB;
	int i;

	char *ptr = (char *) malloc(longC * sizeof(char) + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < longA; i++)
		ptr[i] = s1[i];
	for (i = 0; i < longB; i++)
		ptr[i + longA] = s2[i];

	return (ptr);
}
