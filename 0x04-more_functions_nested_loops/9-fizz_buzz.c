#include <stdio.h>
/**
 * main - prints a square.
 * @void: No parameters
 * Return: void
 */

int main(void)
{
int i;
for (i = 1 ; i <= 100 ; i++)
{
if (i % 3 == 0  || i % 5 == 0)
{
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
}
else
printf("%d", i);
putchar(' ');
}
putchar('\n');
return (0);
}
