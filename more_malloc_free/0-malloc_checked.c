#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * malloc_checked - function that allocates memory using malloc.
  * @b: number integer no negative.
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(sizeof(char) * b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
