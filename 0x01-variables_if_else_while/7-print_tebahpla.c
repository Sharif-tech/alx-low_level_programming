#include <stdio.h>

/**
 * main - program starts here
 *
 * description - Prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
