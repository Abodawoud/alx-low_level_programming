#include "main.h"
/**
* _strlen_recursion - function that returns the length of a string
* @s: charachter of the string
* Description : if *s isn't NULL then moves to the second char by 1byte
*till it meets '\0' then sum all the ones
*Return: string length
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
