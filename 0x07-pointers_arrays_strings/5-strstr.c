#include "holberton.h"
/**
 * *_strstr - locates a substring.
 * @haystack : string.
 * @needle : string.
 * Return: pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)
{
int i, j = 0;
while (haystack[j] != '\0')
{
i = 0;
while (needle[i] != '\0' && needle[i] == haystack[j + i])
i++;
if (needle[i] == '\0')
return (haystack + j);
j++;
}
return (0);
}
