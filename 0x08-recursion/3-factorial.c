#include "main.h"
/**
* factorial - function that returns the length of a string
* @n: n!
* Description : 0 => return (1) , below 0 => return (-1)
*Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
