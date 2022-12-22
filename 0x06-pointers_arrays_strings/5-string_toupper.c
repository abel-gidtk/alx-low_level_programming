#include "main.h"
#include <string.h>

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @s: String to be changed
 *
 * Return: Updated string
 */

char *string_toupper(char *s)
{
	int len = strlen(s);
	int i = 0;

	while (i < len)
	{
		if (s[i] > 90)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
