#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 *
 * Return: Resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i = 0;

	while (i < n && i < strlen(src))
	{
		*(dest + len + i) = src[i];
		i++;
	}
	return (dest);
}
