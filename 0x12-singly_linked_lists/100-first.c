#include "lists.h"
#include <stdio.h>

/**
 * first - executes a function before main
 *
 */
void __attribute__((__constructor__))first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
