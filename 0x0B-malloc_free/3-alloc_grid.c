#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*alloc_grid - function that returns a pointer to a 2 
*dimensional array of integers.
*@height: the First D 
*@width: the second D
*Return: pointer of an array of integers
*/
int **alloc_grid(int width, int height)
{
	int **t;
    int i;

    if (width < 1 || height < 1)
        {return (NULL);}

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);

    for (i = 0; i < height; i++)
    {
        t[i] = malloc(sizeof(int) * width);
    }
 
    return (t);
}
