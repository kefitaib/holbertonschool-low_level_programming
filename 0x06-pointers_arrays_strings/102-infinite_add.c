#include "holberton.h"

/**
 * reverse - compares two strings.
 * @a : array of integers.
 * @n : lenght of the array.
 * Return: Always 0.
 */

void reverse(char *a, int n)
{
int i, j = 0;
for (i = 0 ; i < n / 2 ; i++)
{
j = a[i];
a[i] = a[n - i];
a[n - i] = j;
}
}

/**
 * infinite_add - encodes a string into 1337.
 * @n1 : first integer.
 * @n2 : second integer.
 * @r :  result.
 * @size_r : bufer result.
 * Return: return the sum og the integers.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k = 0, x = 0, sum = 0;
for (i = 0; n1[i] != '\0'; i++)
;
for (j = 0; n2[j] != '\0'; j++)
;
if (size_r < i + 2 || size_r < j + 2)
return (0);
else
{
i--;
j--;
while (i >= 0 || j >= 0)
{
sum = x;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
r[k] = (sum % 10) + '0';
x = sum / 10;
if (x > 0)
r[k + 1] = x + '0';
i--;
j--;
k++;
}

if (x == 0)
k--;

reverse(r, k);
for (i = k + 1; i <= size_r ; i++)
r[i] = '\0';
return (r);
}
}
