#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies the string pointed to
 * @src: Source
 * @dest: Destination
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = strlen(src);

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
