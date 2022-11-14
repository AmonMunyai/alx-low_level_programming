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

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	if (name == NULL)
		(*dog).name = NULL;
	else
		(*dog).name = name;

	(*dog).age = age;

	if (owner == NULL)
		(*dog).owner = NULL;
	else
		(*dog).owner = owner;

	return (dog);
}
