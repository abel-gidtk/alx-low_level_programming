#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: Character to find
 *
 * Return: Pointer to c
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i = 0;

	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
