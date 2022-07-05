#include "main.h"

/**
*print_times_table - prints the time table as per required by the integer n
*@n: integer value
*
*Return: Always 0
*/

void print_times_table(int n)
{
int i, j, p;
if (n >= 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;
if (i == 0 || j == 0)
{
_putchar('0');
}
else if (i != 0 && j != 0)
{
if (p < 100)
{
if (p / 10 > 0)
{
_putchar(p / 10 + '0');
}
_putchar(p % 10 + '0');
}
if (p >= 100)
{
int q = p / 10;
int r = p % 10;
if (q / 10 > 0)
{
_putchar(q / 10 + '0');
}
_putchar(q % 10 + '0');
_putchar(r + '0');
}
}
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
