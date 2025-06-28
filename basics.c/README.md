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
