#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
