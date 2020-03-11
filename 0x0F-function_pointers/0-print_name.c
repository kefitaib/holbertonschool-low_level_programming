#include "function_pointers.h"

/**
 * print_name - callback to a function that prints a name
 * @name: name of the person
 * @f : pointer to a function.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	else
		return;
}
