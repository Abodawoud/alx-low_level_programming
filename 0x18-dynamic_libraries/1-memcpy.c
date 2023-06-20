#include "main.h"
/**
*_memcpy - function that copies memory area
*@dest : pointer to array
*@src : pointer from array
*@n : bytes of the memory area
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + j);
		j++;
	}
	return (dest);
}
