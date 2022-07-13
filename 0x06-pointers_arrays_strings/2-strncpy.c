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
int i, j, len1, len2;
len1 = 0;
len2 = 0;
j = 0;
while (dest[len1] != '\0')
{
len1++;
}
while (dest[len2] != '\0')
{
len2++;
}
for (i = 0; i < n; i++)
{
if (n < len1 && n < len2)
{
dest[j] = src[j];
j++;
}
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}