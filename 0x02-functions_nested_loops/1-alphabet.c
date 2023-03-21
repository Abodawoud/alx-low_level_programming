#include "main.h"
/**
 * print_alphabet - entry point
 * Description - prints all alphabet, in lowercase, followed by a new line
 * Return
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
