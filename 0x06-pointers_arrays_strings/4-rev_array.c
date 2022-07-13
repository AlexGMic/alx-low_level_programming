#include "main.h"
/**
*reverse_array - reverses the order of a given array
*@a: is an integer pointer
*@n: is the length of the array
*
*Return: Always 0
*/
void reverse_array(int *a, int n)
{
int i, mid, high, temp;
i = 0;
high = n - 1;
mid = n / 2;
while (mid--)
{
temp = a[i];
a[i] = a[high - i];
a[high - i] = temp;
i++;
}
}
