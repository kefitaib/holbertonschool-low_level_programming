#include <stdio.h>
/**
 * positive_or_negativ - test if a number is positive or negative
 * @i: No parameters
 * Return: 0
 */
void positive_or_negative(int i)
{
if (i == 0)
printf("%i is zero\n", i);
else if (i > 0)
printf("%i is positive\n", i);
else
printf("%i is negative\n", i);
}
