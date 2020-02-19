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
if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if ((r * 10) + (s[i] - 48) > 2147483647 && (minus % 2 == 0))
break;
else if ((((r * 10) + (s[i] - 48)) * -1) <= -2147483648 && (minus % 2 != 0))
break;
else
{
r = (r * 10) + (s[i] - 48);
i++;
}
}
if (minus % 2 != 0)
return (-r);
else if (minus % 2 == 0)
return (r);
else
return (0);
}
