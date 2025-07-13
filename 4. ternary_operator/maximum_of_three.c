#include <stdio.h>

int main()
{
  int num1, num2, num3, max;

  printf("Enter the First number: ");
  scanf("%d", &num1);
  printf("Enter the Second number: ");
  scanf("%d", &num2);
  printf("Enter the Third number: ");
  scanf("%d", &num3);

  // Use nested ternary operator to find the maximum
  max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2
                                                                           : num3;

  printf("The number %d is maximum\n", max);

  return 0;
}