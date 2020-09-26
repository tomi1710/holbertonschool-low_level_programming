#include <stdio.h>
/**
 *main - aaaaaa
 */
int main(void)
{
int a, sum;
for (a = 0; a < 1024; a++)
{
if (a % 3 == 0 || a % 5 == 0)
{
sum = sum + a;
}
}
printf("%i\n", sum);
return (0);
}
