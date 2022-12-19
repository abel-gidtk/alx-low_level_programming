#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != 0)
	{
		count++;
		i++;
	}

	while (s[count - 1] >= 0)
	{
		_putchar(s[count - 1]);
		count--;
	}
	_putchar('\n');
}
