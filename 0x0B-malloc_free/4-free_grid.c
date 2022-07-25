#include "main.h"
#include <stdlib.h>
/**
*free_grid - frees two dimensional array.
*@grid: the address of the two dimensional grid.
*@height: int type size.
*
*Return: Nothing.
*/
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
while (height--)
{
free(grid[height]);
}
free(grid);
}
}
