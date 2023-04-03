#include "main.h"
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

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		if (*(s + i) == c)
		{
			s = s + i;
			return (s);
		}
	}
	return ('\0');
}
