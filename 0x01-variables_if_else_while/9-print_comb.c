#include <stdio.h>

/**
 * main - program starts here
 *
 * description - prints all possible combinations of single-digit numbers
 *
 * return - Returns 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 0)
			continue;

		putchar(';');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
