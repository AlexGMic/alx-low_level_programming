#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the sum of positive numbers.
*@argc: int type that counts the arguments in the command line.
*@argv: contains or holds the command line arguments.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i;
int result = 0;
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) >=0 && atoi(argv[i]) <= 9)
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", result);
return (0);
}
