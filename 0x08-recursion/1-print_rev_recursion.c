#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse
* @s: charachter of the string
* Description : if *s is NULL then make then moves to the second char by 1byte
*after that the putchar func will print by reverse
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
