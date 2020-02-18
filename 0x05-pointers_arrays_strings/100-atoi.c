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
r = (r * 10) + (s[i] - 48);
i++;
}
if (minus % 2 != 0)
{
/* if (-r >= -2147483648) */
return (-r);
}
else if (minus % 2 == 0)
{
/* if (r <= 2147483647) */
return (r);
}
else
return (0);
}
