#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies the string pointed to buffer pointed
 * @src: Source string
 * @dest: Destination string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (1)
	{
		*d++ = *src++;
		if (*src == '\0')
			break;
	}
	return (dest);
}
