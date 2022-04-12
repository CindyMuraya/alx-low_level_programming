#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: 0, return void
 */
void print_alphabet(void)
{
	char mychar;

	for (mychar = 'a'; mychar <= 'z'; mychar++)
	{
		_putchar(mychar);
	}
	_putchar('\n');
}
