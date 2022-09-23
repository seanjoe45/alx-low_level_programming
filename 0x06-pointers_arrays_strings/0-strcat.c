#include "main.h"

/**
<<<<<<< HEAD
 * _strcat - concatenate two strings
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
=======
 * _strcat - function to concatenate two strings and return a new string
 *
 * @dest: string 1
 * @src: string 2
 * Return: the pointer to the dest.
>>>>>>> a7375144dc019c89418b1ec948ba94f22b8d72d6
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++
	}
<<<<<<< HEAD

=======
>>>>>>> a7375144dc019c89418b1ec948ba94f22b8d72d6
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		if (*(src + count2) == '\0')
<<<<<<< HEAD
			break;
=======
		break;
>>>>>>> a7375144dc019c89418b1ec948ba94f22b8d72d6
		i++;
		j++;
	}
	return (dest);
}
