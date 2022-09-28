#include "main.h"
/**
 * _memcpy - function that copies n bytes from memory area src to memory area dest
 * @n: bytes to be filled
 * @src: memory area of src
 * @dest: memory area dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
