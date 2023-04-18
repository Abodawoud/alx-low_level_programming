#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - dog structure
 * @name: dog name
 * @age: age of the dog
 * @owner: owner name
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
