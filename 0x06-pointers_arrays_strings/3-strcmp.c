#include "main.h"
/**
 * _strcmp -  function that compares two strings.
 * @s1:string1 to compare.
 * @s2: string two to compare.
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		result = (s1[i] - s2[i]);
		return (result);
	}
	return (0);
}
