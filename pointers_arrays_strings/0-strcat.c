#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer.
 * @src: pointer.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int longA = strlen(dest);
	int longB = strlen(src);
	int longC = longA + longB + 1;
	int i;

	char *ptr = (char *)malloc(longC * sizeof(char));

	for (i = 0; i < longC; i++)
	{
		if (i >= longA - 1)
		{
			ptr[i] = dest[i];
		}
		else
			ptr[i] = src[i - longA];
	}
	ptr[longC] = '\0';


	return (ptr);
}
