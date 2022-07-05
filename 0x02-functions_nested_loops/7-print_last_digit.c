#include "main.h"

/**
*print_last_digit - takes an input and prints the last digit of the number
*
*Return: last digit
*/

int print_last_digit(int i)
{
int k;
if (i < 0)
{
k = -1 * (i % 10);
_putchar(k + '0');
return (k);
}
else
{
k = i % 10;
_putchar(k + '0');
return (k);
}
}
