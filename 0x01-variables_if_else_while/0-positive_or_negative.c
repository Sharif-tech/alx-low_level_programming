#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main: Prints a random number and states if:
 * Positive, Nagative or Zero
 * Return: Always returns Zero
 */

/* main.c */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Print Positive, Negative or Zero */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	/* This returns zero */
	return (0);
}
