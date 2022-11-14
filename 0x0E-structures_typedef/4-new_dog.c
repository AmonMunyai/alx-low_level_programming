#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get length of string
 * @str: str to get length of
 * Return: length of given string
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * _strcpy - copies string
 * @src: string to copy
 * @dest: string copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*dog).name == NULL)
		return (NULL);

	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog).owner == NULL)
		return (NULL);

	(*dog).name = _strcpy((*dog).name, name);
	(*dog).age = age;
	(*dog).owner = _strcpy((*dog).owner, owner);

	return (dog);
}
