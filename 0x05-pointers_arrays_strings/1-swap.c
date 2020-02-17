#include "holberton.h"

/**
 * reset_to_98 - akes a pointer to an int as parameter and updates the value.
 * @*a : integer
 * @*b : integer
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
