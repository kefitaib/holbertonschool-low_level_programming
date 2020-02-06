#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - test is the last digit of a number is less or grater than 5
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
int n, x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, x);
if (x == 0)
printf("Last digit of %i is %i and is 0\n", n, x);
if ((x < 0) || ((x > 0) && (x < 6)))
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
return (0);
}
