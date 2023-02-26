#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	int d;
	char letter;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
		putchar('\n');

	return (0);
}
