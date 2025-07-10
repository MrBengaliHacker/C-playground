#include <stdio.h>
int main(){
  int sub1, sub2, total;
  float avg;

  printf("Enter the marks of subject 1: ");
  scanf("%d", &sub1);
  printf("Enter the marks of subject 2: ");
  scanf("%d", &sub2);

  total = sub1 + sub2 ;
  avg = total / 2.0 ;

  printf("Total Marks: %d \n", total);
  printf("Average Marks: %f\n", avg);

    return 0;

}
