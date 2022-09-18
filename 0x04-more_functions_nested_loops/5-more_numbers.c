#include "main.h"

/**
 * more_numbers - printd numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i;
	int ch;

	i = 0;
	while (i <= 10)
	{
		ch = 0;
		while (ch <= 9)
		{
				_putchar ('0' + ch);
		}
		else
		{
			_putchar('0' + ch / 10);
			_putchar('0' + ch % 10);
		}
		ch++;
		_putchar('\n');
		i++;
	}
}

