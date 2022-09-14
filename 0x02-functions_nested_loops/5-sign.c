#include "main.h"

/**
 * prints_sign - determines if the input number is greater,
 * equal or less than zero.
 *
 * @n: The input number as interger.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}

