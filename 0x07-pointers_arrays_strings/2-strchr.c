#include "main.h"
#include <stdio.h>
/**
*_strchr - function that locates a character in a string.
*@s : pointer to array
*@c : the char that function wil start to print
*Return: NULL to continue the array
*/
char *_strchr(char *s, char c)
{
	int i;
	int j = 0;
	int x;

	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		if (*(s + i) == c)
		{
			x = i;
			return (s + x);
		}
	}
	return (NULL);
}
