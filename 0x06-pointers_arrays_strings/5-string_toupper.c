#include "main.h"
/**
*string_toupper - converts each character in a string into uppercase letter.
*@s: is the string passed from main to be converted into uppercase letter.
*
*Return: upper case string pointer.
*/
char *string_toupper(char *s)
{
int i;
char j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
if (s[i] == j)
{
s[i] -= 32;
}
}
}
return (s);
}
