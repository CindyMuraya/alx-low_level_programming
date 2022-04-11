#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - determines whether a number is positive, negative or zero
 * Return: Always 0 if successful
=======
 * Description: main - determines if a number is positive, negative or zero
 * Return: Always 0 (Success)
>>>>>>> 71de36bd20165e4484241c698e7afe77b2b78ed6
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
<<<<<<< HEAD
		printf("%d id negative\n", n);
=======
		printf("%d is negative\n", n);
>>>>>>> 71de36bd20165e4484241c698e7afe77b2b78ed6
	return (0);
}
