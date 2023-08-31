#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - Converts binary to int
 * @b: String conataining binary
 *
 * Return: Converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int j, i = 0, length;
	unsigned int binary = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	length = strlen(b);

	for (j = 0, i = length - 1; i >= 0; j++, i--)
	{
		if (b[i] == '1')
			binary += 1 << j;
	}
	return (binary);
}
