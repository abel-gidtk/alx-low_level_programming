#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character
 * @str: String to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
