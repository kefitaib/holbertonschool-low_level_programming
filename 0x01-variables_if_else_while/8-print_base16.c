#include <stdio.h>
/**
 * main - print the alpabet in lower case and uppercase
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
int x;
char c;
for (x = 48 ; x < 58 ; x++)
{
putchar(x);
}
for (c = 'A' ; c <= 'F' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
