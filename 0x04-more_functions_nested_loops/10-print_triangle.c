#include "main.h"
/**
*print_triangle - prints triangle shapes
*@size: int type of triangle size
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
for (j = 0; j < size - 1; j++)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
}
