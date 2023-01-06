#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 on success else 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;

	while (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	j = 0;
	sum = 0;

	while (j < argc)
	{
		sum += atoi(argv[j]);
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
