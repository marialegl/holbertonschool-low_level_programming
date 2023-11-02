#include "main.h"

/**
 * _islower - Shows 1 if the input is a lowercase character. Another cases 0.
 * @c: The caracter in ASCII code.
 * Description: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
