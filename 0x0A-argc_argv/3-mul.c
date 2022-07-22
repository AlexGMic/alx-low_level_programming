#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the product of two numbers.
*@argc: int type that counts the arguments in the command line.
*@argv: contains or holds the command line arguments.
*
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i;
int result = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
{
result *= atoi(argv[i]);
}
printf("%d\n", result);
}
return (0);
}
