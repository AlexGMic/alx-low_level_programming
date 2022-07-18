#include "main.h"
/**
*_memset - is a function that returns a pointer after coping a values to it.
*@s: is a character pointer.
*@b: is a character variable.
*@n: is an integer variable.
*
*Return: the function returns pointer.
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
