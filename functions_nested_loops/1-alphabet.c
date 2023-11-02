 #include "main.c"

/**
 * print_alphabet - function to print abc
 *
 * Return: always 0
 */
int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
