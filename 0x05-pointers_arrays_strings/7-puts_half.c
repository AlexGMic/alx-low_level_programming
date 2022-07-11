#include "main.h"
/**
*puts_half - prints half of the input string.
*@str: character pointer.
*
*Return: Always 0.
*/
void puts_half(char *str)
{
int len, i, mid;
len = 0;
while (str[len] != '\0')
{
len++;
}
mid = len / 2;
if (len % 2 == 0)
{
for (i = mid; i < len; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = mid + 1; i < len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
