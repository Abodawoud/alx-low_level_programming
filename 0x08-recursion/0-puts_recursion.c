#include "main.h"
/**
* _puts_recursion - function that prints a string, followed by a new line
* @s: charachter of the string
* Description : if *s it means it is NULL then make new line
*if it isn't return the char then moves to the second char by 1byte
*/

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
