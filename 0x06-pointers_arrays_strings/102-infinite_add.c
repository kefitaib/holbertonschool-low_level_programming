#include "holberton.h"
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
char r_tmp[509];
int i, j, k = 0, l, x = 0, sum = 0;
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
r_tmp[k] = (sum % 10) + '0';
x = sum / 10;
if (x > 0)
r_tmp[k + 1] = x + '0';
i--;
j--;
k++;
}
if (x == 0)
k--;
for (l = 0; k >= 0; k--, l++)
r[l] = r_tmp[k];
for (; l <= size_r ; l++)
r[l] = '\0';
return (r);
}
}
