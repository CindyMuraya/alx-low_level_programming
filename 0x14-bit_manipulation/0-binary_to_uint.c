#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or there is one or
 * more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, bin;
	int len;

	i = 0;
	bin = 1;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		i += (b[len] - '0') * bin;
		bin *= 2;
	}
	return (i);
}
