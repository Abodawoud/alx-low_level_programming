#include "function_pointers.h"
/**
 * array_iterator - function that prints a name
 * @array: array of elements
 * @size: is the size of the array
 * @action: pointer to the function you need to use
 * Return: Nothing to return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
