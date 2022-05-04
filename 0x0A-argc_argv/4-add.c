#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: command line arguments
 * @argv: array of pointers to the arguments
 * Return: 0 if no number is passed to the program, if a number
 * contains symbols, print Error followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
