#include "holberton.h"
/**
 * *rot13 - encodes a string into 1337.
 * @s : string.
 * Return: Always 0.
 */

char *rot13(char *s)
{
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0, j;
while (s[i] != '\0')
{
j = 0;
while (j < 26)
{
if (s[i] == s1[j])
s[i] = s2[j];
j++;
}
i++;
}
return (s);
}
