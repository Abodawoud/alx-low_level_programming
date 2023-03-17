#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 0;
	int j = 0;
	char c;

	while (i < 10)
	{
		c = i + '0';
		putchar(c);
		i++;
	}
	while (j < 6)
	{
		c = j + 'a';
		putchar(c);
		j++;
	}
	putchar('\n');
	return (0);
}
