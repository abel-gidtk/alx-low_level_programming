#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_numbers - Prints numbers
 * @separator: Separator
 * @n: Number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
