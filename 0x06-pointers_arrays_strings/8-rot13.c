#include "holberton.h"
/**
 * *rot13 - encodes a string into 1337.
 * @s : string.
 * Return: Always 0.
 */

char *rot13(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if ((s[i] < 110 && s[i] >= 97) || (s[i] < 78 && s[i] >= 65))
{
s[i] += 13;
i++;
}
else if ((s[i] >= 110 && s[i] <= 122) || (s[i] >= 78 && s[i] <= 90))
{
s[i] -= 13;
i++;
}
else
i++;
}
return (s);
}
