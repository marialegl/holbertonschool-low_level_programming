#include "main.h"
#include <stdio.h>

/**
 * puts2 - Every other character of a string, starting whit character 0.
 * verifica si el índice es par
 * @str: pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
