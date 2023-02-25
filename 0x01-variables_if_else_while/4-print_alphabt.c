#include <stdio.h>
/**
 * main - prints all alphabet in letterercase except q and e
 * Return: always 0 (success)
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
