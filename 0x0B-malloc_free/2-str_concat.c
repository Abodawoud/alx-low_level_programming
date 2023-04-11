#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*str_concat - function that concatenates two strings.
*@s1: the original string
*@s2: the additional string
*Return: pointer of an array of chars
*/
char *str_concat(char *s1, char *s2)
{
	char *t;
	int sizeS1;
	int sizeS2;
	int x;
	int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sizeS1 = strlen(s1);
	sizeS2 = strlen(s2);
	t = (char *)malloc(sizeS1 + sizeS2 + 1);

	if (t == NULL)
		return (NULL);

	for (x = 0; x < sizeS1; x++)
		t[x] = s1[x];

	for (y = 0; y < sizeS2; y++, x++)
		t[x] = s2[y];

	return (t);
}
