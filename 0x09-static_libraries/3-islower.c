#include "main.h"

/**
 * _islower - Checks whether input is lowercase
 * @c: Character to be checked
 *
 * Return: 1 if lowercase else 0
*/
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	return (0);
}
