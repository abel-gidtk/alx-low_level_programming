#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Size of array
 * @cmp: Function pointer
 *
 * Return: Index of match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (1);
}
