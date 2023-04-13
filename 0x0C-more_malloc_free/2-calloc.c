#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_calloc - function that allocates memory for an array, using malloc
*@nmemb: number of elements
*@size: size of heap
*Return: pointer to the malloc memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	int i = 0;
	int lm;

	if (nmemb == 0 || size == 0)
		return (NULL);

	lm = nmemb * size;
	t = malloc(lm);
	if (t == NULL)
		return (NULL);
	while (i < lm)
	{
		*(t + i) = 0;
		i++;
	}
	return (t);
}
