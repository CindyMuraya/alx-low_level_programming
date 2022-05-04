#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: command line arguments
 * @argv: array of pointers to the arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
