#include "main.h"
#include <stdio.h>
/**
  * rev_string - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void rev_string(char *s)
{
char letter;
int j;
int i = 0;

while (*(s + i) != '\0')
{
	i++;
}
i = i - 1;
for (j = 0; j <= (i / 2); j++)
{
letter = s[j];
s[j] = s[i - j];
s[i - j] = letter;
}
}
