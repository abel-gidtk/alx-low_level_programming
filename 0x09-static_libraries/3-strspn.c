#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String
 * @accept: Segment
 *
 * Return: Number of bytes in the inital segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	s = "Hello";
	accept = "World";
	printf("%s", s);
	printf("%s", accept);

	return (i);
}
