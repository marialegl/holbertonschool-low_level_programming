#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void puts_half(char *str)
{
	int index = 0, n, len = 0;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
