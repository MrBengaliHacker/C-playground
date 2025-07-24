#include <stdio.h>

// This function takes two integers and returns their sum
int add(int num1, int num2){
return num1 + num2;
}
int main(){

  int num1, num2, sum;

  printf("Enter The First Number: ");
  scanf("%d", &num1);
  printf("Enter The Second Number: ");
  scanf("%d", &num2);

  // Call the add function to calculate the sum
  sum = add(num1, num2);

  printf("The Sum is %d.", sum);
}