#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = strlen(src);

	while (i < n && i < len)
	{
		*(dest + i) = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
