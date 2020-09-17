#include <stdio.h>

int main(void)
{
char ch;

for (ch = "a" ; ch <= "d" ; ch = "f" ; ch <= "p" ; ch = "r" ; ch <= "z" ; ch++)
{
putchar(ch);
}

return (0);
}
