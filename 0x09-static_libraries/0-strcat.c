#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len = strlen(src);
	int len2 = strlen(dest);
	int i = 0;

	while (i < len)
	{
		*(dest + len2 + i) = src[i];
		i++;
	}
	return (dest);
}
