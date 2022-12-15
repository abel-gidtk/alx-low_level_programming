#include <stdio.h>

/**
 * main - Prints 1 to 100 but for multiplies of 3 prints Fizz
 * for multiplies of 5 prints Buzz
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
		i++;
	}
	return (0);
}

