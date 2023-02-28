#include "main.h"
/**
  * puts_half - function  that prints half of a string
  * @s: The string to print
  *
  * Return: void
  */
void puts_half(char *s)
{
int i = 0;
int j;
int len;
	while (*(s + i) != '\0')
	{
	i++;
	}
j = i;
len = i / 2;
	for (i = len; i < j ; i++)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
