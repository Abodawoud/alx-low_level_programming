#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
/**
*main - program that adds positive numbers.
*@argc: argument counter
*@argv: argument vector
*Return: 0 if no number passed, 1 if there are symbols in input
*/
int main(int argc, char *argv[])
{
int result = 0;
int a;
int j;

for (a = 1; a < argc; a++)
{
for (j = 0; argv[a][j] != '\0'; j++)
{
if (!(argv[a][j] > 48 && argv[a][j] < 57))
{
printf("Error\n");
return (1);
}
}
result = result + atoi(argv[a]);
}
printf("%d\n", result);

return (0);
}
