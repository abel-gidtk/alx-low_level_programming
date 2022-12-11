#include <stdio.h>

/**
 * main - Prints triple digit numbers
 *
 * Return: 0
*/
int main(void)
{
	int n = 48;
	int j = 48;
	int k = 48;

	while (n < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (j < k && n < j)
				{
					putchar(n);
					putchar(j);
					putchar(k);
					if (n != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
				k++;
			}
			j++;
		}
		n++;
	}

	putchar('\n');
	return (0);
}
