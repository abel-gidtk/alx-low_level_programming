#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) == 0 && strcmp(argv[i], "0") != 0) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
