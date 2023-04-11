#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str: string to be duplicated
*Return: pointer to a new string which is a duplicate of the string str
*/
char *_strdup(char *str)
{
	char *t;
	unsigned int j;
	unsigned int size;

	if (str == NULL)
		return (NULL);

	size = strlen(str);

	t = (char *)malloc(size + 1);

	if (t == NULL)
		return (NULL);

	for (j = 0; j <= size; j++)
		t[j] = str[j];

	return (t);
}
