#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci.
 * @void: no parameters.
 * Return: Always 0.
 */
int main(void)
{
int i;
double f1 = 0, f2 = 0, sum = 0;
printf("%i, %i, ", 1, 2);
f1 = 1;
f2 = 2;
for (i = 3 ; i <= 98 ; i++)
{
sum = f1 + f2;
if (i != 98)
printf("%.0f, ", sum);
else
printf("%.0f", sum);
f1 = f2;
f2 = sum;
}
return (0);
}
