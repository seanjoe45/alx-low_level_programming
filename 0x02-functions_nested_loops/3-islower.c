#include "main.h"

/**
 *
 * _islower - shows 1 if the input is a lower case character .
 * other cases shows 0.
 *
 * @c: character to be checked
 * Return: always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
