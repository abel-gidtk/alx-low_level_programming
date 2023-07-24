#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int start = 0;
	int end = strlen(s) - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
