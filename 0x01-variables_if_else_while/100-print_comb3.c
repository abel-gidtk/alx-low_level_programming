#include <stdio.h>

/**
 * main - Prints double digit numbers
 *
 * Return: 0
*/
int main(void)
{
	int n = 48;
	int j = 48;

	while (n < 58)
	{
		j = 48;
		while (j < 58)
		{
			if (n < j)
			{
				putchar(n);
				putchar(j);
				if (n != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
			j++;
		}
		n++;
	}

	putchar('\n');
	return (0);
}
