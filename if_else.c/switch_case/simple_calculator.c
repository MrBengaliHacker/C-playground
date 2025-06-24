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
