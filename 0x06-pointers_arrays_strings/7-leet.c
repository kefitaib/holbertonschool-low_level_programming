#include "holberton.h"

/**
 * *leet - encodes a string into 1337.
 * @s : string.
 * Return: Always 0.
 */

char *leet(char *s)
{
int i = 0, j;
char s1[8];
s1[0] = 'o';
s1[1] = 'l';
s1[3] = 'e';
s1[4] = 'a';
s1[7] = 't';
s1[8] = '\0';
while (s[i] != '\0')
{
j = 0;
while (s1[j] != '\0')
{
if (s[i] == s1[j] || s[i] == s1[j] - 32)
s[i] = j + 48;
j++;
}
i++;
}
return (s);
}
