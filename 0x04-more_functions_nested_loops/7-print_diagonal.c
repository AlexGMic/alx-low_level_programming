#include "main.h"
/**
*print_diagonal - prints diagonal line as per specified in the main function
*@n: number of diagonal slashes or lines to be printed
*
*Return: Always 0
*/
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\');
_putchar('\n');
}
}
