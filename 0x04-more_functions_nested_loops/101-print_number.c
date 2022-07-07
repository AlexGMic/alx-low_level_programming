#include "main.h"
/**
*print_number - prints an integer
*@n: int type to be printed
*
*Return: Always 0.
*/
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
num = -n;
_putchar('-');
}
else
{
num = n;
}
if (num / 10)
{
print_number(num / 10);
}
_putchar((num % 10) + '0');
}
