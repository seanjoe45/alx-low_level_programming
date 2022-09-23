#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
	{
		i++
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		if (*(src + count2) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
