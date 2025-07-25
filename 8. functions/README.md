## 💻 Program: Addition of Two Numbers Using Function

**📔 Problem**: Write a program that takes two integer inputs from the user and prints their sum using a function.

**💡 Solution**: [View Code](sum_of_2.c)

```c
#include <stdio.h>

// This function takes two integers and returns their sum
int add(int num1, int num2){
return num1 + num2;
}
int main(){

  int num1, num2, sum;

  printf("Enter The First Number: ");
  scanf("%d", &num1);
  printf("Enter The Second Number: ");
  scanf("%d", &num2);

  // Call the add function to calculate the sum
  sum = add(num1, num2);

  printf("The Sum is %d.", sum);
}

```

### OUTPUT

```
Enter The First Number: 5
Enter The Second Number: 7
The Sum is 12.
```
## 💻 Program: Power Function

**📔 Problem**: Write a program to find the value of one number raised to the power of another by passing two number to an user defined function.

**💡 Solution**: [View Code](power_function.c)

```c
#include <stdio.h>

// Function to calculate a raised to the power b
int power(int base, int exponent)
{
  int result = 1;

  for (int i = 1; i <= exponent; i++)
  {
    result = result * base;
  }

  return result;
}

int main()
{
  int a, b;

  printf("Enter the base: ");
  scanf("%d", &a);

  printf("Enter the exponent: ");
  scanf("%d", &b);

  // Function call to calculate a^b
  int result = power(a, b);
  printf("%d raised to the power %d is: %d\n", a, b, result);

  return 0;
}

```

### OUTPUT

```
Enter the base: 2
Enter the exponent: 0
2 raised to the power 0 is: 1
```
```
Enter the base: 3
Enter the exponent: 4
3 raised to the power 4 is: 81
```