#include "main.h"
/**
*_strpbrk - searches the first occurance of a string and returns a pointer.
*@s: a character pointer.
*@accept: a character pointer.
*
*Return: return a pointer.
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (*(s + j) == *(accept + i))
{
return (s + j);
}
}
}
return (0);
}
