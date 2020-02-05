#include <stdio.h>
/**
 * main - Display size of various types on the computer
 * @void: No parameters
 * Return: 0
 */
int main(void)
{
char char_var;
int int_var;
long int long_int_var;
long long int long_long_int_var;
float float_var;
printf("Size of a char: %d byte(s)\n", sizeof(char_var));
printf("Size of int: %d byte(s)\n", sizeof(int_var));
printf("Size of long int: %d byte(s)\n", sizeof(long_int_var));
printf("Size of long long int: %d byte(s)\n", sizeof(long_long_int_var));
printf("Size of float: %d byte(s)\n", sizeof(float_var));
return (0);
}
