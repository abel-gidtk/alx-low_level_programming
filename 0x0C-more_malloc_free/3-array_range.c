#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum
 * @max: Maximum
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *nums;
	int j = min;

	if (min > max)
		return (NULL);

	nums = malloc((max - min + 1) * sizeof(int));

	if (nums == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		nums[i] = j;
		j++;
	}

	return (nums);
}
