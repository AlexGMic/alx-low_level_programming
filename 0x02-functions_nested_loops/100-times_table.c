#include "main.h"

/**
*print_times_table - prints the time table as per required by the integer n
*@n: integer value
*
*Return: Always 0
*/

void print_times_table(int n)
{
int i, j, product;
if (n >= 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (j == 0)
_putchar('0');
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(product % 10 + '0');
}
else if (product >= 10 && product < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
else if (product > 99 && product < 1000)
{
_putchar(',');
_putchar(' ');
_putchar(product / 100 + '0');
_putchar((product / 10) % 10 + '0');
_putchar(product % 10 + '0');
}
}
_putchar('\n');
}
}
}
