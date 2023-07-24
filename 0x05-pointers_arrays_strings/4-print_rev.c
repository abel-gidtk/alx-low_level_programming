#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*(s + length) != '\0')
		length++;
	for (i = length; i > 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
