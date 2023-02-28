#include "main.h"
/**
  * puts_half - function  that prints half of a string
  * @s: The string to print
  *
  * Return: void
  */
void puts_half(char *str)
{
int i = 0;
int j;
int len;
	while (*(str + i) != '\0')
	{
	i++;
	}
j = i;
len = (i - 1) / 2;
	for (i = len; i < j ; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
