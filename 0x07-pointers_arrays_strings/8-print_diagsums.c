#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @s : square matrix.
 * Return: void.
 */


void print_diagsums(int *a, int size)
{
int i, j, x = 0, y = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
x += *a;
if (i + j == size - 1)
y += *a;
a++;
}
}
printf("%d, %d\n", x, y);
}
