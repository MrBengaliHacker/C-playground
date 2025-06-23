#include <stdio.h>

int main()
{
  int num1, num2, max;

  printf("Enter the First number: ");
  scanf("%d", &num1);
  printf("Enter the Second number: ");
  scanf("%d", &num2);

  max = num1 > num2 ? num1 : num2;

  printf("The number %d is maximum\n", max);

  return 0;
}