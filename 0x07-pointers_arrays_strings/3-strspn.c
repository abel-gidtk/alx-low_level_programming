#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String
 * @accept: String containing characters to be checked
 *
 * Return: Length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int count = 0;
	unsigned int j;
	bool contained = true;

	while (s[i] != '\0' && contained)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j] && j == strlen(accept) - 1)
				contained = false;
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}
