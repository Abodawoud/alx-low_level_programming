#include "main.h"
/**
*_strstr -  function that locates a substring.
*@haystack : number of bytes in the initial segment
*@needle : bytes
*Return: haystack + a
*/
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			if (needle[b + 1] == '\0')
			{
				return (haystack + a);
			}
		}
}

return ('\0');
}
