#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci.
 *
 * Return: Always 0.
 */
int main(void)
{
long int i, f1 = 0, f2 = 0, sum = 0;
printf("%i, %i, ", 1, 2);
f1 = 2;
f2 = 1 + 2;
printf("%li, ", f2);
for (i = 4 ; i <= 50 ; i++)
{
sum = f1 + f2;
if (i != 50)
printf("%li, ", sum);
else
printf("%li\n", sum);
f1 = f2;
f2 = sum;
}
return (0);
}
