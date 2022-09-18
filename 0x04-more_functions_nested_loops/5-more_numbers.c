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

	for (i = 0; i < 10; 1++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch <= 10)
				_putchar ('0' + ch);
		}
		else
		{
			_putchar('0' + ch / 10);
			_putchar('0' + j % 10);
		}
		ch++;
		_putchar('\n');
		i++;
	}
}

