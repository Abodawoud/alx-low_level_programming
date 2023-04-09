#include "main.h"
/**
 *_strncpy - Function copies a string.
 *@dest: Copied String
 *@src: The string where I will copy it from
 *@n: The number of
 *Return: The dest pointer
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (n > i)
		{
			dest[i] = src[i];
		}
		else
			break;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (&dest[0]);
}
