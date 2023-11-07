#include "main.h"
#define TAM 70

/**
 * _puts - prints a string.
 * @str: pointer to the string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
