#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of
 *  integers using the Linear search algorithm
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
