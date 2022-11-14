#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of dog
 * Return: pointer to memory of new dog, NULL otherwise;
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;

	return (dog);
}
