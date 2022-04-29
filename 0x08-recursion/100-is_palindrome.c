#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * p1 - palindrome
 * @s: string
 * @l: position
 * Return: boolena
 */
int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if a string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
