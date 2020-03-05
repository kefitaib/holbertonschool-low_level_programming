#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_error - print "Error" with putchar.
 *
 * Return: integer.
 */

void print_error(void)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
}


/**
 * is_number - check a string if it's contain only digits.
 * @s : string.
 *
 * Return: integer.
 */

int is_number(char *s)
{
int x = 0;
while (*s++)
if (*s < 48 && *s > 58)
{
x = 1;
break;
}
return (x);
}


/**
 * _atoi -  return a pointer of integer from a string.
 * @tab : pointer od intager.
 * @arg : string.
 *
 * Return: Nothing.
 */

void _atoi(int tab[], char *arg)
{
int i;
for (i = 0; arg[i] != '\0'; i++)
tab[i] = arg[i] - '0';
}


/**
 * main -  multiplies two positive numbers.
 * @argc : number of argements.
 * @argv : array of argements.
 *
 * Return: Nothing.
 */

int main(int argc, char **argv)
{
int x = 0, arg1, arg2, i, j, *tab1, *tab2, *s;

if (argc != 3)
{
print_error();
exit(98);
}

x = is_number(argv[1]) + is_number(argv[2]);
if (x > 0)
{
print_error();
exit(98);
}

for (arg1 = 0; argv[arg1] != '\0'; arg1++)
;
for (arg2 = 0; argv[arg2] != '\0'; arg2++)
;

_atoi(tab1, argv[1]);
_atoi(tab2, argv[2]);

s = malloc(sizeof(int) * arg1 + 1);

for (i = 0; i < arg1; i++)
{
for (j = 0; j < arg2; j++)
{
x = tab1[i] * tab2[2];
s[j] = x % 10;
x /= 10;
}
}
return (0);
}
