#include "main.h"

/**
 * _strlen_recursion - Check description
 * Description: returns the length of a string.
 * @s: pointer
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	n++;
	n += _strlen_recursion(s + 1);

	return (n);
}
