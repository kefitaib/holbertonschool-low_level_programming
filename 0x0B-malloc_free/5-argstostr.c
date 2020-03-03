#include "holberton.h"
#include <stdlib.h>

/**
 * _size - size of 2 dimentinal array.
 * @av : array of strings.
 * @ac : size of av.
 * Return: pointer.
 */

int _size(char **av, int ac)
{
int i, j, size = 0;
for (i = 0; i <= ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
size++;
size++;
}
return (size + 1);
}

/**
 * *argstostr - concatenates all the arguments of your program.
 * @av : array of strings.
 * @ac : size of av.
 * Return: pointer.
 */

char *argstostr(int ac, char **av)
{
int i, j, k = 0, size = 0;
char *p;

if (av == NULL || ac == 0)
return (NULL);

size = _size(av, ac);
p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);

for (i = 0; i <= ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
p[k] = av[i][j];
j++;
k++;
}
p[k] = '\n';
k++;
}
p[k] = '\0';
return (p);
}
