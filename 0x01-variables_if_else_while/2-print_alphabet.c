#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
