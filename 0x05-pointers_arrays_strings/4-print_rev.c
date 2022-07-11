#include "main.h"
/**
*print_rev - prints the string in reverse order.
*@s: character pointer.
*
*Return: Always 0.
*/
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
for (len--; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
