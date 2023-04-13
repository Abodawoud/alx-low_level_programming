#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*malloc_checked - function that allocates memory using malloc
*@b: size of memory
*Return: pointer to the malloc memory
*/
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
