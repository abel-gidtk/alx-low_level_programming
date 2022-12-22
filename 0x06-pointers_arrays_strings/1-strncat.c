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
	int len2 = strlen(src);
	int i = 0;

	printf("%d %d %d", len, len2, i);
	return (dest);
}
