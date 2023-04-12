#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*free_grid - unction that frees a 2 dimensional grid previously
*created by your alloc_grid function
*@height: the First D equals to rows
*@grid: 2d array
*Return: pointer of an array of integers
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
