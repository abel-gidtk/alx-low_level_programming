#include "main.h"
#include <string.h>

/**
 * leet - Encodes a string into 1337
 * @s: String to be modified
 *
 * Return: Modified string
 */

char *leet(char *s)
{
	int len = strlen(s);
	int i = 0;
	int j;

	while (i < len)
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == "aAeEoOtTlL"[j])
				s[i] = "4433007711"[j];
			j++;
		}
		i++;
	}
	return (s);
}
