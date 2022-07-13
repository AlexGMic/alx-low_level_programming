#include "main.h"
/**
*_strncat - concatenates the string by copying specified number of characters.
*@dest: is the destination character pointer.
*@src: is the source character pointer.
*@n: number of characters to be copied.
*
*Return: returns the destination string pointer.
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
return (dest);
}
