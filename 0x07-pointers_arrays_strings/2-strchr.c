#include "main.h"
/**
*_strchr - returns the character after the first detected letter.
*@s: a character pointer.
*@c: a character variable.
*
*Return: returns a pointer to the first character occurrence.
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (*(s + i) == c)
{
return (s + i);
}
}
if (*(s + i) == c)
{
return (s + i);
}
return ('\0');
}
