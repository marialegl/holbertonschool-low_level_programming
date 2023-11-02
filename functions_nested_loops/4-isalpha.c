#include "main.h"

/**
 *  _isalpha - Shows 1 if the input is a c is a letter lowercase or uppercase.
 * Another cases 0.
 * @c: The character in ASCII code.
 * Description: The character to be checked.
 *
 * Return: 1 if c is a letter lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
