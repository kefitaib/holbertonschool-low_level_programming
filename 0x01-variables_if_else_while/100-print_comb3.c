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
for (j = 48+x ; j < 58 ; j++)
{
if ((j != i) || ((i == 56) && (j == 57)))
{
putchar(i);
putchar(j);
}
if (((i + j) < 113) && (j != i))
{ 
putchar(',');
putchar(' ');
}
}
x++;
}
putchar('\n');
return (0);
}
