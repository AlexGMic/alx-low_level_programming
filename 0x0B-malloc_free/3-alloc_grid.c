#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - forms two dimensional array of input width and height.
*@width: int type.
*@height: int type.
*
*Return: integer pointer on success.
*/
int **alloc_grid(int width, int height)
{
int **ptr, i, j;
ptr = malloc(sizeof(*ptr) * height);
if (width < 1 || height < 1 || ptr == 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ptr[i] = malloc(sizeof(**ptr) * width);
if (ptr[i] == 0)
{
while (i--)
{
free(ptr[i]);
}
free(ptr);
return (NULL);
}
for (j = 0; j < width; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
