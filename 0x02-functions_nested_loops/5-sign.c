#include "main.h"

/**
*print_sign: print the sign for the respective number
*@n: integer type can be positive, negative or zero
*Description: print +, 0, or - based on the number
*Return: 1 if +, 0 if 0, and -1 if -
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
