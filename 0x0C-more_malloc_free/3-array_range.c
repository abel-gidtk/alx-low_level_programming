#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum integer
 * @max: Maximum integer
 *
 * Return: Pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
