#include "holberton.h"

/**
 * rev_string - prints a string, in reverse.
 * @s : string.
 * Return: void.
 */

void rev_string(char *s)
{
char s1[509];
int i = 0, j, k = 0, l = 0;
while (s[i] != '\0')
i++;

for (j = i - 1 ; j >= 0 ; j--)
{
s1[k] = s[j];
k++;
}
for (l = 0 ; l < i ; l++)
s[l] = s1[l];
}
