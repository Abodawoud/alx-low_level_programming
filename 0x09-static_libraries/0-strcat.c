#include "main.h"
/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
