#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  //adadad
char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;
//aaaa
printf("Size of a char: %ls byte(s)\n", sizeof(chartype));
printf("Size of an int: %ls byte(s)\n", sizeof(inttype));
printf("Size of a long int: %ls byte(s)\n", sizeof(longinttype));
printf("Size of a long long int: %ls byte(s)\n", sizeof(longlonginttype));
printf("Size of a float: %ls byte(s)\n", sizeof(floattype));

return (0);
}
