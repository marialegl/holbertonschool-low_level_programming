#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Define the structure
  * @name: Name of the dog.
  * @age: Age of the dog.
  * @owner: Owner's name of the dog.
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

dog *my_dog(char *name, float age, char *owner);

#endif
