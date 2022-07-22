#include <stdio.h>
/**
*main - prints the number of arguments passed into it.
*@argc: int type that counts the number of arguments in the command line.
*@argv: contains or holds the command line arguments.
*
*Return: Always 0.
*/
int main(int argc, char const *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
