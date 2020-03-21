#include <stdio.h>

void startupfun(void) __attribute__ ((constructor));

/**
 * startupfun - print a message before the main function is executed.
 *
 * Return: voidAlways 0.
 */

void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
