#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars with a specific char
 * @size: Size of array
 * @c: Character
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
