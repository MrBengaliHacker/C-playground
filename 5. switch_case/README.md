## 💻 Program: Simple Calculator Using Switch Case in C

**📔 Problem**: Write a C program that performs basic arithmetic operations (+, -, *, /) on two integers entered by the user.  
Use the `switch` statement to handle different operators.

**💡 Solution**: [View Code](simple_calculator.c)

```c
#include <stdio.h>

int main()
{
  int num1, num2;
  char operator;

  printf("Enter the First number: ");
  scanf("%d", &num1);

  printf("Enter the Second number: ");
  scanf("%d", &num2);

  printf("Enter the Operator (+, -, *, /): ");
  scanf(" %c", &operator); // note the space before %c

  switch (operator)
  {
  case '+':
    printf("The addition is %d.\n", num1 + num2);
    break;
  case '-':
    printf("The subtraction is %d.\n", num1 - num2);
    break;
  case '*':
    printf("The multiplication is %d.\n", num1 * num2);
    break;
  case '/':
    if (num2 == 0)
      printf("Division by zero is not allowed.\n");
    else
      printf("The division is %.2f.\n", (float)num1 / num2);
    break;
  default:
    printf("Invalid operator entered.\n");
  }

  return 0;
}

```
### OUTPUT

```
Enter the First number: 16
Enter the Second number: 5
Enter the Operator (+, -, *, /): /
The division is 3.20.
```
```
Enter the First number: 4
Enter the Second number: 0
Enter the Operator (+, -, *, /): /
Division by zero is not allowed.
```
```
Enter the First number: 7
Enter the Second number: 3
Enter the Operator (+, -, *, /): ^
Invalid operator entered.
```