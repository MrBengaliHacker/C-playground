## 💻 Program: Check Even or Odd using Ternary Operator

**📔 Problem**: Write a C program to check whether a number is even or odd using the **ternary operator** instead of an `if-else` statement.

**💡 Solution**: [View Code](even_odd.c)

```c
#include <stdio.h>

int main()
{
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  num % 2 == 0 ? printf("The number %d is Even\n", num) : printf("The number %d is Odd\n", num);

  return 0;
}


```
### OUTPUT

```
Enter the number: 5
The number 5 is Odd
```
```
Enter the number: 8
The number 8 is Even
```

## 💻 Program: Find Maximum of Two Numbers using Ternary Operator

**📔 Problem**: Write a C program to find the maximum of two integers using the **ternary operator**.

**💡 Solution**: [View Code](maximum_of_two.c)

```c
#include <stdio.h>

int main()
{
  int num1, num2, max;

  printf("Enter the First number: ");
  scanf("%d", &num1);
  printf("Enter the Second number: ");
  scanf("%d", &num2);

  max = num1 > num2 ? num1 : num2;

  printf("The number %d is maximum\n", max);

  return 0;
}


```
### OUTPUT

```
Enter the First number: 5
Enter the Second number: 8
The number 8 is maximum
```
## 💻 Program: Find Maximum of Three Numbers using Ternary Operator

**📔 Problem**: Write a C program to find the maximum of three integers using the **ternary operator**.

**💡 Solution**: [View Code](maximum_of_three.c)

```c
#include <stdio.h>

int main()
{
  int num1, num2, num3, max;

  printf("Enter the First number: ");
  scanf("%d", &num1);
  printf("Enter the Second number: ");
  scanf("%d", &num2);
  printf("Enter the Third number: ");
  scanf("%d", &num3);

  // Use nested ternary operator to find the maximum
  max = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2
                                                                           : num3;

  printf("The number %d is maximum\n", max);

  return 0;
}


```
### OUTPUT

```
Enter the First number: 12
Enter the Second number: 45
Enter the Third number: 33
The number 45 is maximum
```