#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;

printf("Size of a char: %i byte(s)\n", sizeof(chartype));
printf("Size of an int: %i byte(s)\n", sizeof(inttype));
printf("Size of a long int: %i byte(s)\n", sizeof(longinttype));
printf("Size of a long long int: %i byte(s)\n", sizeof(longlonginttype));
printf("Size of a float: % byte(s)\n", sizeof(floattype));

return (0);
}
