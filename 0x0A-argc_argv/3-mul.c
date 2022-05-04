#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: command line arguments
 * @argv: array of pointers to the arguments
 * Return: 0 if successful, 1 if less than 2 arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
