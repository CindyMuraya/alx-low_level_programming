#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, bin = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*(b + n) != '\0')
	{
		if (*(b + n) != '0' && *(b + n) != '1')
		{
			return (0);
		}
		bin <<= 1;
		if (*(b + n) == '1')
		{
			bin ^= 1;
		}
		n++;
	}
	return (bin);
}
