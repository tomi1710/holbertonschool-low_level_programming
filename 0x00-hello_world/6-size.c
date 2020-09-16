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

  printf("Size of a char: %ls bytes\n", sizeof(chartype));
  printf("Size of an int: %ls bytes\n", sizeof(inttype));
  printf("Size of a long int: %ls bytes\n", sizeof(longinttype));
  printf("Size of a long long int: %ls bytes\n", sizeof(longlonginttype));
  printf("Size of a float: %ls bytes\n", sizeof(floattype));

  return (0);
}
