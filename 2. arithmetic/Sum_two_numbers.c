#include <stdio.h>
int main()
{
  int num1, num2, sum;

  printf("Enter the First Number: ");
  scanf("%d",&num1);
  printf("Enter the Second Number: ");
  scanf("%d",&num2);

  
  sum = num1 + num2 ;   //  Calculate the sum

  printf("The sum of %d and %d is %d.\n", num1, num2, sum);

  return 0;
}