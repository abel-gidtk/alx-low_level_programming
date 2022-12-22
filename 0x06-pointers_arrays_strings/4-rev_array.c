#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array to be reversed
 * @n: Size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int arr[n];

	for (int k = 0; k < n; k++)
		arr[k] = a[k];

	int i = n - 1;
	int j = 0;

	while (i >= 0)
	{
		a[j] = arr[i];
		j++;
		i--;
	}
}
