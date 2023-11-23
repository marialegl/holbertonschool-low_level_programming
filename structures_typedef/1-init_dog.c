#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to the new pet
 * @name: name the pet
 * @age: age the pet
 * @owner: owner the pet
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
