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
	int i = 0;
	int len1 = strlen(dest);
	int len2 = strlen(src);

	while (i < n && i < len2)
	{
		*(dest + len1 + i) = src[i];
		i++;
	}
	return (dest);
}
