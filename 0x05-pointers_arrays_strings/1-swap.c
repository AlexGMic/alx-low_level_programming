#include "main.h"
/**
*swap_int - takes two integer pointers and swaps their values.
*@a: integer pointer.
*@b: integer pointer.
*
*Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
