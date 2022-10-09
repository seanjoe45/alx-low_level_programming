#include "main.h"

/**
 * _strstr - finds the first occurence of the substring.
 * needle in the string haystack.
 * @haystack: entire string
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char i;
	char j;

	for (i = 0; *(i + haystack) != '\0', i++)
	{
		for (j = 0, *(j + needle) != '\0', j++)
		{
			if (*(j + needle))
				return (*(j + haystack));
				i++;
				j++;
		}
	}
	return (0);
}
