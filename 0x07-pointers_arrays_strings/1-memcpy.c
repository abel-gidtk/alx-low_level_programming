#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
