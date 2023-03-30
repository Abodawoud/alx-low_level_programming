#include "main.h"
/**
 *string_toupper -  function that changes all
 *lowercase letters of a string to uppercase
 *@src: Pointer to the string
 *Return: pointer src
 */

char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}
	}
	return (src);
}
