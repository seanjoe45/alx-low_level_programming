#include "main.h"

/**
 *  print_alphabet_x10 - Prints the alphabet 10 times.
 *
 *  Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int joel;
	int b;

	for (joel = '0'; joel <= '9'; joel++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
