#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * _strcopy - copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: pointer to the destination
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog, NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);
	poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}
	poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}
	poppy->name = _strcopy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcopy(poppy->owner, owner);
	return (poppy);
}
