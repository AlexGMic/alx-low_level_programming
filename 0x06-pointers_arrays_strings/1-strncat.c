#include "main.h"
/**
*_strncat - a function that concatenates two strings.
*@dest: is the destination string pointer.
*@src: is the source string pointer.
*@n: int type length of copied character.
*
*Return: returns the concatenated string.
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j, len1, len2, sum;
len1 = 0;
len2 = 0;
while (dest[len1] != '\0')
{
len1++;
}
while (src[len2] != '\0')
{
len2++;
}
j = 0;
sum = len1 + n;
for (i = len1; i < sum; i++)
{
if (n <= len2)
{
dest[i] = src[j];
j++;
}
}
dest[i] = '\0';
return (dest);
}
