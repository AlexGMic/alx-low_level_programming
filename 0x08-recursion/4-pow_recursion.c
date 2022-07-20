#include "main.h"
/**
*_pow_recursion - square a given number and return the value.
*@x: is the number to be squared.
*@y: the power to square the number with.
*
*Return: returns an integer type.
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
