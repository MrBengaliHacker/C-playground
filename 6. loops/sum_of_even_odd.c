#include <stdio.h>
int main()
{

  int even_sum = 0, odd_sum = 0;

  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      even_sum = even_sum + i;
    }
    else
    {
      odd_sum = odd_sum + i;
    }
  }
  printf("The even sum is %d.\n", even_sum);
  printf("The odd sum is %d.\n", odd_sum);

  return 0;
}