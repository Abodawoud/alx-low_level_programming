#include "main.h"
/**
*_memset - function that fills memory with a constant byte
*@s : pointer to the address of the array
*@b : the constant byte
*@n : bytes of the memory area
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
