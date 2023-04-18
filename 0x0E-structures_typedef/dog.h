#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: dog name
 * @age: age of the dog
 * @owner: owner name
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
