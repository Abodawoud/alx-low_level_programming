#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that prints a struct dog
 * @name:dog name
 * @age:dog age
 * @owner:dog owner
 * Return: p address value
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);
	(*p).name = malloc(strlen(name) + 1);
	(*p).owner = malloc(strlen(owner) + 1);
	(*p).age = age;

	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}

	if ((*p).owner == NULL)
	{
		free(p);
		free((*p).name);
		return (NULL);
	}

	strcpy((*p).name, name);
	strcpy((*p).owner, owner);

	return (p);
}
