#include <stdio.h>
int main()
{
  int num;
  printf("Enter Your number:");
  scanf("%d", &num);

  if (num < 0 || num > 100)
  {
    printf("Invalid marks entered.\n");
  }
  else if (num > 90)
  {
    printf("You got Grade A (Excellent).\n");
  }
  else if (num > 75)
  {
    printf("You got Grade B (Very Good).\n");
  }
  else if (num > 60)
  {
    printf("You got Grade C (Good).\n");
  }
  else if (num > 30)
  {
    printf("You got Grade D (Needs Improvement).\n");
  }
  else
  {
    printf("You got Grade F (Fail).\n");
  }
  return 0;
}