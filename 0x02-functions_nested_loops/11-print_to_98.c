#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints series of numbers starting from n to 98
*@n: is the starting point
*Return: Always 0
*/

void print_to_98(int n)
{
int x = 98;
while (n < x)
{
printf("%d, ", n);
n++;
}
while (n > x)
{
printf("%d, ", n);
n--;
}
printf("%d", x);
_putchar('\n');
}
