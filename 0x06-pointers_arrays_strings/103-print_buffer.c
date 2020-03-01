#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - encodes a string into 1337.
 * @b : buffer.
 * @size : size of the buffer.
 * Return: void.
 */

void print_buffer(char *b, int size)
{
int i, j, k = 31, x = 0, y = 0;
y = (size - 1) % 10;
x = ((size - 1) / 10) * 10;

for (i = 0; i <= x; i+= 10)
{
printf("%08x:", i);
for (j = 0; j < 10; j++)
{
if (j % 2 == 0)
putchar(' '); 
printf("%02x", b[j + i]);
}
putchar(' ');
for (j = 0; j < 10; j++)
{
if (isprint(b[j + i]) != 0)
printf("%c", b[j + i]);
else
putchar('.');
}

putchar('\n');
}
i -= 10;
if (y > 0)
{
for (j = 0; j < y; j++)
{
if (j % 2 == 0)
{
putchar(' ');
k--;
} 
printf("%02x", b[j + x]);
k -= 2;
}

 for (; k >= 0; k--)
  putchar(' ');
  putchar(' '); 
  for (; x < size; x++)
  {
  if (isprint(b[x]) != 0)
  printf("%c", b[x]);
  else
  putchar('.');
 } 
}
putchar('\n');
}
