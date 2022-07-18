#include "main.h"
/**
*_strspn - returns the number of bytes consisting of the bytes in accept.
*@s: is the checking character string.
*@accept: is a character string to be checked.
*
*Return: returns an unsigned int type.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, len = 0;
for (i = 0; s[i] >= '\0'; i++)
{
for (j = 0; accept[j] >= '\0'; j++)
{
if (s[i] == accept[j])
{
len++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (len);
}
