#include <stdio.h>

/**
 * main - Prints all single digit numrbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int letter;

	for (letter = 0; letter < 10; letter++)
		putchar((letter % 10) + '0');

	putchar('\n');

	return (0);
}
