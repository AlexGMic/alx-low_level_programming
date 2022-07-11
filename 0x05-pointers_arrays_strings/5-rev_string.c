#include "main.h"
/**
*rev_string - reverses a string.
*@s: character pointer.
*
*Return: Always 0.
*/
void rev_string(char *s)
{
int len, high, mid, i;
char temp;
len = 0;
while (s[len] != '\0')
{
len++;
}
high = len - 1;
mid = len / 2;
i = 0;
while (mid--)
{
temp = s[high - i];
s[high - i] = s[i];
s[i] = temp;
i++;
}
}
