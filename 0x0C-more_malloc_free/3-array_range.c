#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*array_range - function that creates an array of integers
*@min: number of elements
*@max: size of heap
*Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *t;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	t = malloc(sizeof(int) * ((max - min) + 1));
	if (t == NULL)
		return (NULL);
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
