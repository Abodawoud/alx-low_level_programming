#include "main.h"
/**
 * cap_string - capitalize char
 * @string: string
 * Return: string
 */

char *cap_string(char *string)
{
	int i = 0;
	int j;
	char separator[] = {'\n', '\t', ' ', '.', ',', ';', '!', '"',
	'?', ')', '(', '{', '}'};

	if ((string[i] >= 'a') && (string[i] <= 'z'))
	{
		string[i] = string[i] - 32;
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (separator[j] == string[i])
			{
				if (string[i + 1] >= 'a' && string[i + 1] <= 'z')
				{
					string[i + 1] = string[i + 1] - 32;
				}
			}
		}
	}
	return (string);
}
