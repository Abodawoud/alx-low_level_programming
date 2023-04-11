#include "main.h"
/**
*create_array - makes an array of chars.
*@size: size of the array
*@c: storage char
*
*Return: pointer of an array of chars
*/
char *create_array(unsigned int size, char c)
{
	char *t;
	int i;

	t = malloc(size);
	if (size == 0)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
