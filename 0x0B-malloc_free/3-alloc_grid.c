#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*alloc_grid - function that returns a pointer to a 2
*dimensional array of integers.
*@height: the First D equals to rows
*@width: the second D equals to columns
*Return: pointer of an array of integers
*/
int **alloc_grid(int width, int height)
{
	int **t;
	int i;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			while (i >= 0)
			{
				free(t[--i]);
			}
			free(t);
			return (NULL);
		}
	}

	return (t);
}
