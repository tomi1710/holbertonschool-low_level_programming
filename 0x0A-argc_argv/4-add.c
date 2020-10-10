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
if (argc == 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
a = atoi(argv[i]);
if (a == 0 && *argv[i] != '0')
{
printf("Error\n");
return (1);
}
sum += a;
}
printf("%d\n", sum);
return (0);
}
