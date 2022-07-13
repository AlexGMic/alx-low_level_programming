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
int dest_len, i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
