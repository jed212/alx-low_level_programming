#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * _strlen - finds the length of a string
  * @s: the string.
  *
  * Return: the length of the string.
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
  * _strcpy - copies a string to a buffer.
  * @dest: the adress of the buffer
  * @src: the string
  *
  * Return: returns the buffer address
  */
char *_strcpy(char *dest, char *src)
{
	int j;
	int length;

	j = 0;
	length = _strlen(src);
	while (j <= length)
	{
		*(dest + j) = *(src + j);
		j++;
	}

	return (dest);
}

/**
  * new_dog - Creates a new dog
  * @name: name for the new dog
  * @age: age of the new dog
  * @owner: name of the dog's owner
  * Return: the new dog, or else NULL if malloc fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	char *nm;
	char *ownr;
	int name_length;
	int owner_length;
	float a;

	a = age;
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		return (NULL);
	}
	name_length = _strlen(name);
	nm = malloc(sizeof(*nm) * (name_length + 1));

	if (nm == NULL)
	{
		free(new_d);
		return (NULL);
	}
	owner_length = _strlen(owner);
	ownr = malloc(sizeof(*ownr) * (owner_length + 1));
	if (ownr == NULL)
	{
		free(new_d);
		free(nm);
		return (NULL);
	}
	new_d->name = _strcpy(nm, name);
	new_d->age = a;
	new_d->owner = _strcpy(ownr, owner);
	return (new_d);
}
