#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms of Fibonacci sequence.
 *
 * Return: Always 0.
 */
int main(void)
{
long int f1 = 0, f2 = 0, sum = 0, sum_even;
f1 = 2;
f2 = 3;
sum_even = f1;
while (sum <= 4000000)
{
sum = f1 + f2;
if (sum % 2 == 0)
sum_even += sum;
f1 = f2;
f2 = sum;
}
printf("%li\n", sum_even);
return (0);
}
