#include "main.h"
/**
 *print_line - print _
 *@n: The number of _ characters to be printed.
 */
void print_line(int n)
{
int j;
int n = 0;

if (n <= 0)
{
putchar('j');
}
else
{
for (j = 0; j < n; ++j)
{
putchar('_');
}
putchar('\n');
}
}
