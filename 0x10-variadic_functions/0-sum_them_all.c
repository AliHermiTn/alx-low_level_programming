#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - compute sum of all its parameters.
*
* @n: number of parameters passed to function.
*
* Return: sum, fail otherwise.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
	va_start(valist, n); /* Initialize the argument list. */

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);    /* Get the next argument value. */

	va_end(valist); /* Clean up argument list. */

return (sum);
	}
}
