#include"main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * error - function to print Error and exit(98)
*/
void error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * is_Num - function checks it is digit or not
 * @s1: Fitst String
 * @s2: Second String
 * Return: the length of two strings
*/
void is_Num(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
		if (!isdigit(s1[i]))
			error();

	for (j = 0; s2[j] != '\0'; j++)
		if (!isdigit(s2[j]))
			error();
}
/**
 * main - program that multiplies two positive numbers.
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	char *s1 = argv[1];
	char *s2 = argv[2];
	int l1, l2, l2_O, totalLength, *t, i, digit1, digit2, carry;
	int j = 0;

	if (argc != 3)
		error();
	is_Num(s1, s2);
	l1 = strlen(s1), l2 = strlen(s2), l2_O = strlen(s2), totalLength = l1 + l2;
	t = malloc((totalLength + 1) * sizeof(int));
	if (t == NULL)
		error();
	for (i = 0; i <= totalLength; i++)
		*(t + i) = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		digit1 = s1[l1] - '0';
		carry = 0;
		for (l2 = l2_O - 1; l2 >= 0; l2--)
		{
			digit2 = s2[l2] - '0';
			carry = carry + t[l1 + l2 + 1] + (digit1 * digit2);
			t[l1 + l2 + 1] = carry % 10;
			carry = carry / 10;
		}
		if (carry > 0)
			t[l1 + l2 + 1] = t[l1 + l2 + 1] + carry;
	}
	for (i = 0; i < totalLength; i++)
	{
		if (t[i])
			j = 1;
		if (j)
			putchar(t[i] + '0');
	}
	if (!j)
		putchar('0');
	putchar('\n');
	free(t);
	return (0);
}
