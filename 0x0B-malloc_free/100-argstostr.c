#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *@ac:arg counter
 *@av:arg vector
 * Return: pointer to the first address of the heap.
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t j;
	int length = 0;
	char *t;
	char *c;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length = length + strlen(av[i]) + 1;
		/**
		 * to get the length of string + NULL Terminator
		*/
	}
	t = (char *)malloc(length + 1);


	if (t == NULL)
		return (NULL);
	c = t;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= strlen(av[i]); j++)
		{
			if (av[i][j] == '\0')
				*t = '\n';
			else
				*t = av[i][j];
			t++;
		}
	}
	*t = '\0';
	return (c);
}
