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