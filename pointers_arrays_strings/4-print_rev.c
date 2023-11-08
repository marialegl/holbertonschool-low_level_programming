#include "main.h"
#include <stdio.h>
#include <string.h>
#define TAM 70

/**
 * print_rev - prints a string in reverse.
 * description: function that prints a string, in reverse
 * @s: pointer to the string.
 */
void print_rev(char *s)
{
	int len = strlen(s);
	
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
