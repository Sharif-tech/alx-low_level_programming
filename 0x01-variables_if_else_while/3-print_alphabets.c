#include <stdio.h>

/**
 * main - program entry point
 *
 * description - prints lower and upercase letters
 *
 * return - always returns 0
 *
 */

int main(voind)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	
	putchar('\n');
	
	return 0;
}
