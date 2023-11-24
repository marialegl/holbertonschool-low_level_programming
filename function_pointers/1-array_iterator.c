#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - Runs a function as a parameter on array elements.
  * @array: The array of integers to be processed.
  * @size: number of elements in the array.
  * @action:pointer that takes an integer as an argument and returns nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
