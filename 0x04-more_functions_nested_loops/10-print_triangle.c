#include "main.h"
/**
*print_triangle - prints triangle shapes
*@size: int type, triangle size
*
*Return: Always 0.
*/
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = i; j < size - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
