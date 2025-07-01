#include <stdio.h>
int main()
{
  int a, b;

  printf("Enter the First Number: ");
  scanf("%d", &a);
  printf("Enter the Second Number: ");
  scanf("%d", &b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("\nAfter Swapping: \n");
  printf("First Number: %d\nSecond Number: %d", a, b);

  return 0;
}