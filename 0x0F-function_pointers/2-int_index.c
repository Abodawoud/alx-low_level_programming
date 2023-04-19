#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of elements
 * @size: is the size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
