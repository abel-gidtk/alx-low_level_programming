#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: Format
 *
 * Return:void
 */
void print_all(const char * const format, ...)
{
	putchar(format[0]);
}
