#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring.
*@s : number of bytes in the initial segment
*@accept : bytes
*Return: initialLength
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, found;
	unsigned int initialLength = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		found = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		else
			initialLength++;
	}
	return (initialLength);
}
