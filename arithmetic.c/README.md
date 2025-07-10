## 📋Exercise : Arithmetic Operations

**Question**: Write a C program to perform addition, subtraction, multiplication, and division of two integers.

**Solution**: [View Code](arithmetic_operations.c)

```c
#include <stdio.h>

int main() {
    int a = 12, b = 3;
    
    printf("%d\n", a + b);  // Addition
    printf("%d\n", a - b);  // Subtraction
    printf("%d\n", a * b);  // Multiplication
    printf("%d\n", a / b);  // Integer Division

    return 0;
}
```
### OUTPUT

```
15
9 
36
4 
```

## ➕Program: Sum of Two Numbers
**Question**: Write a C program to input two integers from the user and display their sum.

**Solution**: [View Code](Sum_two_numbers.c)

```c
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
```
### OUTPUT

```
Enter the First Number: 5
Enter the Second Number: 7
The sum of 5 and 7 is 12.
```
## 📐Program: Real Roots of a Quadratic Equation

**Question**: Write a C program to calculate the **real roots** of a quadratic equation.

**Solution**: [View Code](quadratic_equation.c)

```c
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
```
### OUTPUT

```
Enter the value of a: 1
Enter the value of b: -5
Enter the value of c: 6
Value of Real Root 1: 3.000000
Value of Real Root 2: 2.000000
```
```
Enter the value of a: 5
Enter the value of b: 2
Enter the value of c: 3
No real roots exist (discriminant is negative).
```
## 📋Program: Swap Two Numbers Using Temporary Variable in C

**Question**: Write a C program to swap the values of two integers using a temporary variable.

**Solution**: [View Code](swap_using_temp.c)

```c
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
```
### OUTPUT

```
Enter the First Number: 2
Enter the Second Number: 5

After Swapping:
First Number: 5
Second Number: 2 
```
## 📋Program: Swap Two Numbers Without Using Temporary Variable in C

**Question**: Write a C program to swap the values of two integers without using a temporary variable.

**Solution**: [View Code](swap_without_temp.c)

```c
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
```
### OUTPUT

```
Enter the First Number: 2
Enter the Second Number: 8

After Swapping:
First Number: 8
Second Number: 2
```
## 🧮Program: Total and Average of Two Subjects

**Question**: Write a program to input the marks of two subjects and calculate their total and average.

**Solution**: [View Code](Total_and_Average.c)

```c
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
```
### OUTPUT

```
Enter the marks of subject 1: 70
Enter the marks of subject 2: 80
Total Marks: 150 
Average Marks: 75.000000
```
