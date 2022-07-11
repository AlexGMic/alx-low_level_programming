#include "main.h"
/**
*-puts - prints a given string.
*@str: character pointer.
*
*Return: Always 0.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(str);
str++;
}
_putchar('\n');
}
