#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  float r1, r2, discriminant;

  // 📝 Taking input from the user
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);
  printf("Enter the value of c: ");
  scanf("%d", &c);

  //  Calculate the discriminant (b² - 4ac)
  discriminant = b * b - 4 * a * c;

  //  Check if discriminant is negative (no real roots)
  if (discriminant < 0)
  {
    printf("No real roots exist (discriminant is negative).\n");
  }
  else
  {
    //  Calculate roots using the quadratic formula
    r1 = (-b + sqrt(discriminant)) / (2 * a);
    r2 = (-b - sqrt(discriminant)) / (2 * a);

    //  Output the real roots
    printf("Value of Real Root 1: %f\n", r1);
    printf("Value of Real Root 2: %f\n", r2);
  }

  return 0;
}
