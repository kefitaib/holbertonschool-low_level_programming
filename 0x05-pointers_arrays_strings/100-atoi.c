#include "holberton.h"

/**
 * _atoi - copies the string.
 * @s : string.
 * Return: char.
 */

int _atoi(char *s)
{
int i = 0, r = 0, minus = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
minus++;
i++;
if (s[i] >= '0' && s[i] <= '9')
break;
}

while (s[i] >= '0' && s[i] <= '9')
r = (r * 10) + s[i];  

if (minus % 2 != 0)
return (-r);
return (r);
}
