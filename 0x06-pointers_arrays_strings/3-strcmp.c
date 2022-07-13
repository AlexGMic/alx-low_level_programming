#include "main.h"
/**
*_strcmp - compares two strings.
*@s1: the first string to be compared.
*@s2: the second string to be compared.
*
*Return: return int type.
*/
int _strcmp(char *s1, char *s2)
{
int i, j;
i = 0;
j = 0;
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
if (i < j)
{
return (i - j);
}
else if (i > j)
{
return (i - j);
}
return (0);
}
