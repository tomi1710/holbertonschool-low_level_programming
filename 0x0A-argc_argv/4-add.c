#include <stdio.h>
#include <stdlib.h>
/**
 *main - asdads
 *@argc: asdasda
 *@argv: asdadada
 *Return: asdadad
 */
int main(int argc, char *argv[])
{
int i, sum = 0, a;
for (i = 1; i < argc; i++)
{
a = atoi(argv[i]);
sum += a;
}
printf("%d\n", sum);
return (0);
}
