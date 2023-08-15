#include <stdio.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 * @name: of the dog.
 * @age: of the dog
 * @owner: of the dog
 * Return: new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog mydog;
	struct dog *my_dog;

	my_dog = &mydog;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
