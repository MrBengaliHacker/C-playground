#include <stdio.h>
int main () {
  int a, b, temp; //'temp' is a temporary variable used for swapping

  printf("Enter the First Number: ");
  scanf("%d", &a);
  printf("Enter the Second Number: ");
  scanf("%d", &b);

  temp = a;
  a = b;
  b = temp;
  printf("\nAfter Swapping:\n");
  printf("First Number: %d\nSecond Number: %d", a, b);

  return 0;
}