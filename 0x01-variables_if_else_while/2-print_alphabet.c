#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	{
int x = 'A';
	while (x <= 'Z')
	{
		int i = tolower(x);

		putchar(i);
		x++;
	}
	putchar('\n');
	}
	return (0);
}
