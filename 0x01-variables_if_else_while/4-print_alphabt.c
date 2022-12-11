#include <stdio.h>

/**
 * main - Prints alphabet without q and e
 *
 * Return: 0
*/
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		if (n != 113 && n != 101)
			putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
