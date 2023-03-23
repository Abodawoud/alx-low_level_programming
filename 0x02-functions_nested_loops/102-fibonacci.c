#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
long int  a = 1;
long int  b = 2;
long int  c;
int i;

printf("%ld, %ld", a, b);

for (i = 2; i < 50; i++)
{
c = a + b;
printf(", %ld", c);
a = b;
b = c;
}

printf("\n");

return (0);
}
