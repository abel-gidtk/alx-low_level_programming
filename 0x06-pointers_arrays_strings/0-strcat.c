#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int srcLen = strlen(src);
	int desLen = strlen(dest);
	int i;

	for (i = 0; i < srcLen; i++)
	{
		dest[desLen + i] = src[i];
	}

	return (dest);
}
