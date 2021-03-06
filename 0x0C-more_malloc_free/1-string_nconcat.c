#include "holberton.h"
#include <stdlib.h>


/**
 * _strlen - return the size of a string.
 * @s : string.
 * Return: pointer of char.
 */

unsigned int _strlen(char *s)
{
unsigned int i = 0;
while (s[i] != '\0')
i++;
return (i);
}


/**
 * *string_nconcat - concatenates two strings.
 * @s1 : first string.
 * @s2 : second string.
 * @n : size.
 * Return: pointer of char.
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size1 = 0, size2 = 0, sizer = 0;
char *sr;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

size1 = _strlen(s1);
size2 = _strlen(s2);
if (size2 > n)
size2 = n;
sizer = size1 + size2 + 1;

sr = malloc(sizeof(char) * sizer);
if (sr == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
sr[i] = s1[i];

for (j = 0; j < size2; j++, i++)
sr[i] = s2[j];

sr[i] = '\0';
return (sr);
}
