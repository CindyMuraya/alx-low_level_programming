#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 */
void _puts(char *str);
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
