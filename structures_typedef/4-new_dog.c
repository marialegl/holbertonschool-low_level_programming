#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * new_dog - check description.
 * description: creates a new dog structure.
 * @name: name the new pet.
 * @age: age the new pet.
 * @owner: owner the new pet.
 * Return: returns pointer to buffer of datatype dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcute = malloc(sizeof(dog_t));

	if (dogcute == NULL)
	{
		free(dogcute);
		return (NULL);

		dogcute->name = name;
		dogcute->age = age;
		dogcute->owner = owner;
	}
	return (dogcute);
}
