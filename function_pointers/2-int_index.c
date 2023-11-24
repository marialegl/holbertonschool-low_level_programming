#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer to an array of integers.
 * @size: size of the array.
 * @cmp: pointer to a function that takes an integer as an argumen.
 * Return: -1 if no matching element found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	return (-1);
}
