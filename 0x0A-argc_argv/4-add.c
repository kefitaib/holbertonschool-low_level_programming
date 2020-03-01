#include <stdio.h>
#include <stdlib.h>
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
if (atoi(argv[i]) >= 0)
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
else
{
printf("0\n");
return (0);
}
}
