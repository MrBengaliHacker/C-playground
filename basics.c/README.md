## 📋Exercise 1: Hello World

**Question**: Write a C program to print "Hello World".

**Solution**: [View Code](hello_world.c)

```c
#include <stdio.h>
int main() {
    printf("Hello World");
    return 0;
}
```
### OUTPUT

```
hello world
```

## 📋Exercise 2: Escape Sequences

**Question**: Write a C program to print text on multiple lines using the newline escape sequence (\n).

**Solution**: [View Code](escape_sequences.c)

```c
# include <stdio.h>
int main() {
    printf("Hi\n");
    printf("I am learning C programming.\n");
    printf("It's fun!\n");
    return 0;
}
```
### OUTPUT

```
Hi
I am learning C programming.
It's fun!
```

## 📋Exercise 3: Comments and Formatting

**Question**: Write a C program that demonstrates the use of single-line and multi-line comments.
**Solution**: [View Code](comments_formatting.c)

```c
#include <stdio.h>
int main() {
     // This is a single-line comment
     printf("Learning C is fun!\n");

     /*
      This is a multi-line comment.
      You can write explanations here.
     */
      printf("Comments make code easy to understand.\n");
      return 0;
}
```
### OUTPUT

```
Learning C is fun!
Comments make code easy to understand.
```

## 📋Exercise 4: Variables

**Question**: Write a C program to declare and print different types of variables: integer, float, and character.

**Solution**: [View Code](variables.c)

```c
#include <stdio.h>

int main() {
    int age = 20;          // Integer variable
    float height = 5.9;    // Floating point variable
    char grade = 'A';      // Character variable
  
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
```
### OUTPUT

```
Age: 20
Height: 5.9
Grade: A
```

## 📋Exercise 5: Arithmetic Operations

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
