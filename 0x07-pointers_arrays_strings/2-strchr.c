#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched
 * @c: Character to be located
 *
 * Return: Pointer to c, if character is not found NULL
 */

char *_strchr(char *s, char c)
{
	int len = strlen(s);
	int i = 0;
	char *found;

	while (i < len)
	{
		if (*(s + i) == c)
		{
			found = &(*(s + i));
			return (found);
		}
		i++;
	}
	return (NULL);
}
