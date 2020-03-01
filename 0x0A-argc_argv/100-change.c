#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change for an amount of money.
 * @argc : number of argements.
 * @argv : array containe the argements.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i, sum = 0, x = 0;
int coin[5] = {25, 10, 5, 2, 1};
if (argc == 2)
{
x = atoi(argv[1]);
if (x > 0)
{
for (i = 0; i < 5; i++)
{
sum += x / coin[i];
x %= coin[i];
if (x == 0)
break;
}
printf("%d\n", sum);
}
else
printf("0\n");
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
