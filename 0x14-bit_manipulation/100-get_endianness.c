#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: VOID
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	return ((int)*c);
}
