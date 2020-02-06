#include <stdio.h>
/**
 * main - print all single digit numbers from 0 to 99 with double digit
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
int i, j, k, x = 0;
for (i = 48 ; i < 56 ; i++)
{
for (j = 48 + x ; j < 57 ; j++)
{
for (k = 48 + x ; k < 58 ; k++)
{
if (((j != i) && (i != k) && (k != j)) || (i + j + k == 168))
{
putchar(i);
putchar(j);
putchar(k);
}
if ((i + j + k < 168) || ((j != i) && (i != k) && (k != j)))
{
putchar(',');
putchar(' ');
}
}
}
x++;
}
putchar('\n');
return (0);
}
