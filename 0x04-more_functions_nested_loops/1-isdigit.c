#include "main.h"
/**
 *_isdigit - checks for a digit (0 through 9).
 *@c: parameter for digit
 * Return: 1 if is a number (0 to 9), 0 in other case.
 **/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
