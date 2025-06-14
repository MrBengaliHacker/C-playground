#include <stdio.h>
int main()
{
  int num, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    if (i % 2 != 0)  // check if i is odd
    {
      sum = sum + i; // add only odd numbers
    }
  }

  printf("The sum of odd numbers from 1 to %d is %d\n", num, sum);
  return 0;
}
