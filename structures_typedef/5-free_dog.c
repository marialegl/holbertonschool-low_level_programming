#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - funtion that frees dogs.
 * @d: pointer to free memory.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d);
}
