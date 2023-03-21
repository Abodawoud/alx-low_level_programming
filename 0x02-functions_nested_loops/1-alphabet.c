#include "main.h"
/**
 * print_alphabet - entry point
 * Description - prints all alphabet, in lowercase, followed by a new line
 * Return
*/

void print_alphabet(void);

int main(void)
{
        print_alphabet();
        _putchar('\n');
        return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
