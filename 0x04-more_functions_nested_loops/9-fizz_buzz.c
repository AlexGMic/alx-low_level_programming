#include <stdio.h>
/**
*fizz_buzz - print fizz in place of 3 and buzz in place of 5
*
*Return: Always 0
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz ");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
