#include "main.h"
/**
 *reverse_array - function that reverses the content of an array of integers
 *@a: pointer to the array
 *@n: The size of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;

	while (j < n - 1)
		j++;
	for (i = 0; i < j; i++)
	{
		int swap;

		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		j--;
	}
}
