#include <stdio.h>

/**
 * main - sums nultplies of 3 or 5
 *
 * Return: Always 0
 */

int main(void)
{
int start, end, total;
end = 1024;
total = 0;
for (start = 0; start < end; start++)
{
if ((start % 3 == 0) || (start % 5 == 0))
{
total = total + start;
}
else
{
continue;
}
}
printf("%d", total);
printf("\n");
return (0);
}
