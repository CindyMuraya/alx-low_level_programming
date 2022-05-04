#include <stdio.h>

/**
 * main - prints program name followed by a new line
 * @argc: command line arguments
 * @argv: array of pointers to the arguments
 * Return: 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
