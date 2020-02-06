#include <stdio.h>
/**
 * main - print all single digit numbers from 0 to 99 with double digit
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
int i, j, x = 0;
for (i = 48  ; i < 58 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
putchar(i);
putchar(j);
if ((j == 57) && (i == 57))
{
x = 1;
}
if (x == 0)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
