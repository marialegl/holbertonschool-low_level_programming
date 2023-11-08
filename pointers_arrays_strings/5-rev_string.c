#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string, makes a line break 
 * and prints the same string in reverse on the same line.
 * @s: pointer to the string.
 * main: print characters whit putchar
 */
int main(void);
void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	{
		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		_putchar('\n');
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
