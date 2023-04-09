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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
		return (s);

	return (NULL);
}
