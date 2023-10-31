#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print base 16 numbers in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (d = 'a' ; d <= 'f' ; d++)
	{
		putchar(d);
	}

	putchar('\n');

	return (0);
}
