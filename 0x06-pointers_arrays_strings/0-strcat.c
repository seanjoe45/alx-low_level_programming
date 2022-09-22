#include "main.h"

/**
 * _strcat - function to concatenate two strings and return a new string
 *
 * @dest: string 1
 * @src: string 2
 * Return: the pointer to the dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

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
