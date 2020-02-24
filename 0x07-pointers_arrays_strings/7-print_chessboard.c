#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 * @a : matrice string.
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
int i, j;
char c;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
c = a[i][j];
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
_putchar(a[i][j]);
}
_putchar('\n');
}
}
