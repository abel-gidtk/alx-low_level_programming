#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Bytes
 *
 * Return: copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srcLen = strlen(src);
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (i == srcLen)
			break;
	}
	dest[strlen(dest)] = '\0';


	return (dest);
}
