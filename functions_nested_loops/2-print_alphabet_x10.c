#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet x 10 in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char a,i;
	for (a = 0; a <= 9; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
