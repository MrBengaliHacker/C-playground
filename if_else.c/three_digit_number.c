#include <stdio.h>

int main()
{
  int x;
  printf("Enter a positive integer:");
  scanf("%d", &x);
  if (x > 99 && x < 1000)
  {
    printf("%d is a three digit number.\n", x);
  }
  else
  {
    printf("%d is not a three digit number.\n", x);
  }

  return 0;
}
