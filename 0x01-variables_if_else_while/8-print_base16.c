#include <stdio.h>

/**
 * main - program entry point
 *
 * description - Prints all the numbers of base 16
 * in lowercase, followed by a new line
 *
 * return - Returns zero
 */

int main(void)
{
	int number;
	char letter;

	for (number =0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter ='a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
