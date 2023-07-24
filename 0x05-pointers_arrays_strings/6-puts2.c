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

	for (i = 0; i < strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
