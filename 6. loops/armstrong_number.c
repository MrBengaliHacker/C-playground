#include <stdio.h>

int main()
{
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

  int sum = 0;
  int copy = num;

  // Extract digits and compute the sum of cubes
  while (copy > 0)
  {
    int digit = copy % 10;
    sum = sum + digit * digit * digit;
    copy = copy / 10;
  }

  // Check for Armstrong number
  if (sum == num)
  {
    printf("The number %d is a Armstrong number.\n", num);
  }
  else
  {
    printf("The number %d is  not a Armstrong number.\n", num);
  }
  return 0;
}
