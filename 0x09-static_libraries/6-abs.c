#include "holberton.h"
/**
 * _abs - writes the absolute value of an integer.
 * @x: No parameters.
 *
 * Return: x.
 */
int _abs(int x)
{
if (x < 0)
return (x * -1);
else
return (x);
}
