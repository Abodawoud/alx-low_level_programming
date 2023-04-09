#include "main.h"
/**
*_strpbrk - function that searches a string for any of a set of bytes.
*@s : number of bytes in the initial segment
*@accept : bytes
*Return: array Addrress
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;
	int j = 0;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[i])
			{
				return ((s + i));
			}
		}
	}
	return ('\0');
}
