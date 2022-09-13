#include <stdio.h>

/**
 * main - print numbers between 0 to 9 and letters between a to f.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
