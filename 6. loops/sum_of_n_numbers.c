#include <stdio.h>
int main()
{

  int n, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &n);

  // Loop from 0 to n and calculate the sum
  for (int i = 0; i <= n; i++)
  {
    sum = sum + i;
  }
  printf("The sum is %d.", sum);

  return 0;
}