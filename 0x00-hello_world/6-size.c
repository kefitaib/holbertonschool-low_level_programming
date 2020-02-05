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
printf("Size of a char: %c byte(s)\n", sizeof(char_var));
printf("Size of int: %i byte(s)\n", sizeof(int_var));
printf("Size of long int: %i byte(s)\n", sizeof(long_int_var));
printf("Size of long long int: %i byte(s)\n", sizeof(long_long_int_var));
printf("Size of float: %f byte(s)\n", sizeof(float_var));
return (0);
}
