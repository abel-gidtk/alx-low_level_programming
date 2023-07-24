#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 * @str: String to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((length - 1) / 2) + 1; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
