#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes from memory area src
 * @src: memory area from where n bytes are copied
 * @dest: final memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
