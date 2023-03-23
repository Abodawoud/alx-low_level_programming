#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
long long  a = 1;
long long  b = 2;
long long  c;

printf("%lld, %lld", a, b);

for (int i = 2; i < 50; i++)
{
c = a + b;
printf(", %lld", c);
a = b;
b = c;
}

printf("\n");

return (0);
}
