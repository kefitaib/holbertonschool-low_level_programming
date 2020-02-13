#include <stdio.h>
/**
 * main - prime factors.
 * @void: No parameters
 * Return: void
 */

int main(void)
{
long int i = 2, n = 612852475143;
while(n / 2 > i)
{
while ((n % i == 0)  && (n / 2 > i))
{
n = n / i;
}
i++;
}
printf("%li\n", n);
return (0);
}
