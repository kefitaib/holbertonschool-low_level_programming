#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * res_char - print a character.
 *
 * @s: type
 * @l: list of argements.
 */

void res_char(va_list l)
{
	printf("%c", va_arg(l, int));
}


/**
 * res_integer - print an integer.
 *
 * @s: type
 * @l: list of argements.
 */

void res_integer(va_list l)
{
	printf("%i", va_arg(l, int));
}



/**
 * res_float - print a float.
 *
 * @s: type
 * @l: list of argements.
 */


void res_float(va_list l)
{
	printf("%f", va_arg(l, double));
}



/**
 * res_string - print a string.
 *
 * @s: type
 * @l: list of argements.
 */


void res_string(va_list l)
{
	char *s;
	s = va_arg(l, char *);
	if (s)
	{
		printf("%s", s);
		return;
		}
	printf("(nil)");
}



/**
 * print_all - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	va_list lst;
	int i = 0, j;
	char f[] = "fics";

	void (*fun_ptr_arr[])(va_list) = {res_float, res_integer,
					 res_char, res_string};
	va_start(lst, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (f[j] != '\0')
		{
			if (f[j] == format[i])
			{
			        (*fun_ptr_arr[j])(lst);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
