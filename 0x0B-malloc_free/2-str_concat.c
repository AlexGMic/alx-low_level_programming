#include "main.h"
#include <stdlib.h>
/**
*str_concat - concatenates two input strings.
*@s1: the first input string.
*s2: the seconde input string.
*
*Return: returns the concatenated string.
*/
char *str_concat(char s1, char s2)
{
unsigned int size, total, i, j, k, m;
char *ptr;
total = 0;
size = 0;
j = 0;
k = 0;
m = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[size] != '\0')
{
size++;
}
while (s2[j] != '\0')
{
j++;
}
total = size + j;
ptr = (char *)malloc(sizeof(char) * (total + 1));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = s1[i];
}
for (k = size; k < total; k++)
{
ptr[k] = s2[m];
m++;
}
ptr[k] = '\0';
return (ptr);
}
