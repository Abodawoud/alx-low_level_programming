#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
	putchar(i);
	i--;
	}
	putchar('\n');
	return (0);
}
