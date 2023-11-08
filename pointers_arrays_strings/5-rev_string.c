#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints a string, makes a line break 
 * and prints the same string in reverse on the same line.
 * @s: pointer to the string.
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	printf("%s\n", s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
