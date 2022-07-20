#include "main.h"
/**
 * square - returns the natural square root of a number.
 * @n: input number.
 * @val: iterator.
 * Return: square root or -1.
 */
int square(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val * val < n)
{
return  (square(n, val + 1));
}
else
{
return (-1);
}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
