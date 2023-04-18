#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Write a function that initialize a variable of type
 * @d:dog struct
 * @name:dog name
 * @age:dog age
 * @owner:dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
