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
if (width < 1 || height < 1)
{
return (NULL);
}
ptr = malloc(sizeof(**int) * (height + width));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
}
