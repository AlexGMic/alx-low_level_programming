#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}
/**
*argstostr - concatenates all the input strings.
*@ac: is the number of arguments.
*@av: is an array of strings.
*
*Return: returns a character pointer.
*/
char *argstostr(int ac, char **av)
{
int i, j, c = 0, count = 0;
int *ptr;
for (; i < ac; i++; count++)
{
count += _strlen(av[i]);
}
ptr = malloc(sizeof(char) * ac + 1);
if (ac == 0 || av == NULL || ptr == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, c++)
{
ptr[c] = av[i][j];
}
ptr[c] = '\n';
c++;
}
ptr[c] = '\0';
return (ptr);
}
