#include <stdio.h>

//  This program uses logical operators (&&) with if-else to find the maximum of three numbers

int main()
{
  int a, b, c;

  printf("Enter the First number: ");
  scanf("%d", &a);
  printf("Enter the Second number: ");
  scanf("%d", &b);
  printf("Enter the Third number: ");
  scanf("%d", &c);

  if (a > b && a > c)
    printf("The Maximum Number Is : %d", a);
  else if (b > a && b > c)
    printf("The Maximum Number Is : %d", b);
  else
    printf("The Maximum Number Is : %d", c);

  return 0;
}