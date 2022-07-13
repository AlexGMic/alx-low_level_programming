#include "main.h"
/**
*_strcat - a function that concatenates two strings.
*@dest: is the destination string pointer.
*@src: is the source string pointer.
*
*Return: returns the concatenated string.
*/
char *_strcat(char *dest, char *src)
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
sum = len1 + len2;
for (i = len1; i < sum; i++)
{
dest[i] = src[j];
j++;
}
dest[i] = '\0';
return (dest);
}
