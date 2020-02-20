#include "holberton.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @s : string.
 * Return: Always 0.
 */

char *cap_string(char *s)
{
char s1[] = {',', ' ', '(', ')', '{', '}', ':', ';', '!', '?', '"', '\n'};
int i = 0, j;
s1[12] = '\t';
s1[13] = '.';
s1[14] = '\0';
while (s[i] != '\0')
{
j = 0;
while (s1[j] != '\0')
{
if (s[i] == s1[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
j++;
}
i++;
}
return (s);
}
