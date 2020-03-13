#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>


/**
 * print_strings - prints strings, followed by a new line.
 * @separator : string to be printed between numbers.
 * @n : number of parameters based.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *s;

	if (n > 0)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			s = va_arg(list, char *);
			if (s)
				printf("%s", s);

			else
				printf("(nil)");

			if (separator && i != n - 1)
				printf("%s", separator);
		}

		putchar('\n');
		va_end(list);
	}
}
