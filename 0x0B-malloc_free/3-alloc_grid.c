#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*alloc_grid - function that returns a pointer to a 2 
*dimensional array of integers.
*@width: 
*@height: 
*Return: pointer of an array of chars
*/
int **alloc_grid(int width, int height)
{
	int **t;
    int i;
    int j;

    if (width < 1 || height < 1)
        {return (NULL);}

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);

    for (i = 0; i < height; i++)
    {
        t[i] = malloc(sizeof(int) * width);
    }
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            t[i][j] = 0;
        }
    }
    
    return (t);
}
