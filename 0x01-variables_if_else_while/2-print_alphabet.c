#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0
*/
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
