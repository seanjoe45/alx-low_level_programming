#include "main.h"

/**
 * prints_sign - determines if the input number is >,
 * = or < than 0
 *
 * @n: the input number as interger.
 *
 * Return: 1 if it is greater than zero,  is zero0, -1 is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

