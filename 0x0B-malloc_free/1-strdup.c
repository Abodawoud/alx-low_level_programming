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
	int j;
	int size = strlen(str);

	if (str == NULL)
		return (NULL);

	t = (char *)malloc(size);

	if (t == NULL)
		return (NULL);

	for (j = 0; j <= size - 1; j++)
		t[j] = str[j];

	return (t);
}
