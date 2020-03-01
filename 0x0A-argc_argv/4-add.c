#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers.
 * @argc : number of argements.
 * @argv : array containe the argements.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (strspn(argv[i], "0123456789") == strlen(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
