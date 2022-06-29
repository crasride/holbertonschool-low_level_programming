#include <stdlib.h>
#include "dog.h"

/**
* _strlen - function
* @s: string to evaluate
* Return: length the string
*/
int _strlen(char *s)
{
	int initial;

	initial = 0;
	while (s[initial] != '\0')
	{
		initial++;
	}
	return (initial);
}

/**
* *_strcpy - function
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Description : copies string pointed to src terminating null byte (\0)
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int len, initial;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (initial = 0; initial < len; initial++)
	{
		dest[initial] = src[initial];
	}
	dest[initial] = '\0';
	return (dest);
}

/**
* new_dog - creates new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer new dog , NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenst, lennd;

	lenst = _strlen(name);
	lennd = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = malloc(sizeof(char) * (lenst + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lennd + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
