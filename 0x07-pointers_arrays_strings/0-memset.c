#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to address
 * @b: Character to fill
 * @n: Bytes to fill
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
