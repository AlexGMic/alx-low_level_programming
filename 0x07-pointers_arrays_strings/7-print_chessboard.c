#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int i, j, row, col;
i = 0;
j = 0;
row = 8;
col = 8;
char *p;
for (p = &a[0][0]; p < &a[row][col]; p++)
{
if (j == col-1)
{
_putchar(*p);
_putchar('\n');
j = 0;
}
else
{
_putchar(*p);
j++;
}
}
_putchar('\n');
}
