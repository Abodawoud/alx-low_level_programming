#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_realloc - function that reallocates a memory block using malloc and free
*@ptr: is a pointer to the memory previously allocated with a call to malloc
*@old_size: size of old heap of ptr
*@new_size: new size of new memory block
*Return: pointer to the malloc memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	/**
	 * new_size > old_size or new_size < old_size
	 * free the previous malloc
	 * Assign the new size in HEAP
	*/
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
