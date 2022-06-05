#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - pints the alphabet in lowercase, followed by a new line
 *
 * return - returns zero
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
