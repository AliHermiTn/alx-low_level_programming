#include <string.h>
#include "math.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	 unsigned int k = 1;
	 unsigned int i = 0;
	 int c;
	 unsigned int len;

	 len = strlen(b);
	for (c = len  - 1; c >= 0; c--)
	{
	if (b[c] != '0' && b[c] != '1')
	return (0);
	i += (b[c] - '0') * k;
	k *= 2;
	}
	return (i);
}
