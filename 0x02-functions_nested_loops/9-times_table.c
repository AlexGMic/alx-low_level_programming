#include "main.h"

/**
*times_table - hold the multiple of numbers 0 through 9
*
*Return: Always 0
*/

void times_table(void)
{
int i, j, product;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if (j == 9)
{
product = i * j;
_putchar(product/10 + '0');
_putchar(product%10 + '0');
_putchar('$');
}
else
{
product = i * j;
_putchar(product/10 + '0');
_putchar(product%10 + '0');
_putchar(',');
_putchar(' ');

}
}
_putchar('\n');
}
}
