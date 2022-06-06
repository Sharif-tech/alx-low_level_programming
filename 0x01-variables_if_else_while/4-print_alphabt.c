#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - pints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
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
