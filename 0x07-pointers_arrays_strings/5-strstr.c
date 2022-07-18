#include "main.h"
/**
*_strstr - finds the first occurrence of the substring needle in the haystack.
*@haystack: is a character pointer.
*@needle: is a character pointer.
*
*Return: returns a character pointer.
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
for (i = 0; *(haystack + i) != '\0'; i++)
{
for (j = 0; *(needle + j) != '\0'; j++)
{
if (*(haystack + i) == *(needle + j))
{
return (haystack + i);
}
}
}
return ('\0')
}
