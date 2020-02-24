#include "holberton.h"
/**
 * _strspn - encodes a string into 1337.
 * @s : string.
 * @accept : string.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
while (s++)
{
i = 0;
while (accept[i] != '\0')
{
if (*s == accept[i])
break;
i++;
}
if (accept[i] == '\0')
break;
}
return (i + 1);
}
