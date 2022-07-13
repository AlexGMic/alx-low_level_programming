#include "main.h"
/**
*_strncpy - a function that copies strings.
*@dest: is the destination string pointer.
*@src: is the source string pointer.
*@n: int type length of copied character.
*
*Return: returns the concatenated string.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
