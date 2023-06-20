#include "main.h"
/**
 * _strncat - concat number of strings from src to dest
 * @dest: string
 * @src: string
 * @n: number of strings from src
 * Return: address of concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > j)
		{
			dest[i + j] = src[j];
		}
	}

	dest[i + j] = '\0';
	return (dest);
}
