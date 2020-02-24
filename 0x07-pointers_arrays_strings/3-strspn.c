#include "holberton.h"
/**
 * _strspn - encodes a string into 1337.
 * @s : string.
 * @accept : string.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, j;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
break;
j++;
}
if (accept[j] == '\0')
break;
i++;
}
return (i);
}
