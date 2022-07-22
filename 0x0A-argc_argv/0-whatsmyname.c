#include <stdio.h>
/**
*main - prints the name of the program.
*@argc: int type that counts the arguments in the command line.
*@argv: contains or holds the command line arguments.
*
*Return: Always 0.
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
