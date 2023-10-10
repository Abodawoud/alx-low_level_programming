#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if value not present
*/

int jump_search(int *array, size_t size, int value)
{

	size_t m = sqrt(size);
	size_t p1 = 0, p2 = m;

	if (!array)
		return (-1);

	while (p2 < size + m)
	{
		printf("Value checked array[%ld] = [%d]\n", p1, array[p1]);
		if (p1 <= (size_t)value && p2 >= (size_t)value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", p1, p2);
			while (p1 <= p2)
			{
				printf("Value checked array[%ld] = [%d]\n", p1, array[p1]);
				if (value == array[p1])
					return (p1);
				p1++;
			}
		}
		else if (p2 >= size)
		{
			printf("Value checked array[%ld] = [%d]\n", p1, array[p1]);
			while (p1 < size)
			{
				printf("Value checked array[%ld] = [%d]\n", p1, array[p1]);
				p1++;
			}
		}
		p1 = p2;
		p2 += m;
	}
	return (-1);
}
