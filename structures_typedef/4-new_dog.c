#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

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

	dogcute->name = _strcopy(dogcute->name, name);
	dogcute->age = age;
	dogcute->owner = _strcopy(dogcute->owner, owner);
	}
	return (dogcute);
}
