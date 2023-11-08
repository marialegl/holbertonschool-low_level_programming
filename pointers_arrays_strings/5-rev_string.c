#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints a string in reverse.
 * @s: pointer to the string.
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	while (*s != '\0')
	{
		s++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		s--;
	}
}
