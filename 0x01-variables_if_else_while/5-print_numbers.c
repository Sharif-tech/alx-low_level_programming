#include <stdio.h>

/**
 * main - entry point of program
 *
 * description - prints 0 to 9 with new line
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);

}
