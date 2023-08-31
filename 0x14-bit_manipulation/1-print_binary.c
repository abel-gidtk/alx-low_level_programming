#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int mask, print = 0;

	for (mask = 0x800; mask != 0; mask >>= 1)
	{
		if (mask & n)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}
	}
	if (!print)
		_putchar('0');
}
