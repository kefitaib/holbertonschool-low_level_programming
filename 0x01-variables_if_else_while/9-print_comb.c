#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
int i, j;
for (i = 48 ; i < 58 ; i++)
{
putchar(i);
if (i < 57)
{
for (j = 44 ; j >= 32 ; j -= 12)
{
putchar(j);
}
}
}
putchar('$');
putchar('\n');
return (0);
}
