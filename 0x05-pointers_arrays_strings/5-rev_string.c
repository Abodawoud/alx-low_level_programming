#include "main.h"
/**
 * rev_string - reverses a string
 * str_len - to get the length of the string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = str_len(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	putchar('\n');
}
/**
 * str_len - find the length of a string
 * @ptr: pointer to the string to check
 * Return: void
*/
int str_len(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
		i++;
	return (i);
}
