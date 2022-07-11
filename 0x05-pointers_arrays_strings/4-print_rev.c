#include "main.h"
/**
*print_rev - prints the string in reverse order.
*@s: character pointer.
*
*Return: Always 0.
*/
void print_rev(char *s)
{
int i;
int len = 0;
while (*s != 0)
{
s++;
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(*(s+i));
}
_putchar('\n');
}
