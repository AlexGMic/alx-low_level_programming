#include "main.h"
#include <stdio.h>
/**
*print_array - prints a given array using pointer.
*@a: integer pointer.
*@n: int type array length.
*
*Return: Always 0.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
}
