#include "main.h"

/**
 * print_square - Print square of size size
 * @size: Size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int j;
	int i;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
