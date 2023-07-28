#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Bytes
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srcLen = strlen(src);
	int desLen = strlen(dest);
	int i;

	for (i = 0; i < n; i++)
	{
		dest[desLen + i] = src[i];
		if (i == srcLen)
			break;
	}

	return (dest);
}
