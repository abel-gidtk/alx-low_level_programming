#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalized all words of a string
 * @s: String to be capitalizes
 *
 * Return: Updated string
 */

char *cap_string(char *s)
{
	int len = strlen(s);
	int i = 0;

	while (i < len)
	{
		if (s[i] == ' ' || s[i] == ','
|| s[i] == ';' || s[i] == '.'
|| s[i] == '!' || s[i] == '?'
|| s[i] == '"' || s[i] == '('
|| s[i] == ')' || s[i] == '{'
|| s[i] == '}' || s[i] == '\t'
|| s[i] == '\n')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
