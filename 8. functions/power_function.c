#include <stdio.h>

// Function to calculate a raised to the power b
int power(int base, int exponent)
{
  int result = 1;

  for (int i = 1; i <= exponent; i++)
  {
    result = result * base;
  }

  return result;
}

int main()
{
  int a, b;

  printf("Enter the base: ");
  scanf("%d", &a);

  printf("Enter the exponent: ");
  scanf("%d", &b);

  // Function call to calculate a^b
  int result = power(a, b);
  printf("%d raised to the power %d is: %d\n", a, b, result);

  return 0;
}