#include <stdio.h>

int main()
{
  int num, remainder, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &num);

  // finding all divisors and adding them
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum = sum + i;
    }
  }

  // checking if the number is perfect
  if (sum == num)
  {
    printf("%d is a Perfect Number.\n", num);
  }
  else
  {
    printf("%d is Not a Perfect Number.\n", num);
  }

  return 0;
}
