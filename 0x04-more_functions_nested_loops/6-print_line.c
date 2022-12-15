#include "main.h"

/**
 * print_line - Prints a line
 * @n: Length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('\n');
		i = 0;
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
