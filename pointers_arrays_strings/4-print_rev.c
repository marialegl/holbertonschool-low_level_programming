#include "main.h"
#include <string.h>

/**
 * _print_rev - prints a string in reverse.
 * @s: pointer to the string.
 */
void print_rev(char *s)
{
	int i,len;
	char temp;

	len = strlen(s);

	for(i=0; i<len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
	}
	_putchar('\n');
}
