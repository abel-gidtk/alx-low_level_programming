#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: Separator
 * @n: Number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *x;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if ((i != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
