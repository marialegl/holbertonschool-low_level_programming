#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: pointer
 * Return: pointer to the modified string.
 */
char *leet(char *str)
{
	char leet[] = "aAeEoOtTlL";
	char encode[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = encode[j];
				break;
			}
		}
	}
	return (str);
}
