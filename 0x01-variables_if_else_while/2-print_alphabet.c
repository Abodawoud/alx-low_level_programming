#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
    for (int x = 'A'; x <= 'Z'; x++)
    {
        int lower_x = tolower(x);
        putchar(lower_x);
    }
	return 0;
}
