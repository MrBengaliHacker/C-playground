## 💻 Program: Multiplication Table

**📔 Problem**: Write a program that takes an integer input from the user and prints its multiplication table from 1 to 10.

**💡 Solution**: [View Code](multiplication_table.c)

```c
#include <stdio.h>
int main()
{
  int num;
  printf("Which number table you want: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d\n", num, i, num * i);
  }
  return 0;
}

```
### OUTPUT

```
Which number table you want: 5
5 * 1 = 5 
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
```
## 💻 Program: Sum of n Numbers

**📔 Problem**: Write a program to find the sum of given n numbers.

**💡 Solution**: [View Code](sum_of_n_numbers.c)

```c
#include <stdio.h>
int main()
{

  int n, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &n);

  // Loop from 0 to n and calculate the sum
  for (int i = 0; i <= n; i++)
  {
    sum = sum + i;
  }
  printf("The sum is %d.", sum);

  return 0;
}

```
### OUTPUT

```
Enter the number: 8
The sum is 36.
```

## 💻 Program: Sum of Odd Numbers

**📔 Problem**: Write a program to calculate the sum of all **odd numbers** from 1 to a number entered by the user.

**💡 Solution**: [View Code](sum_of_odd_numbers.c)

```c
#include <stdio.h>
int main()
{
  int num, sum = 0;
  printf("Enter the number: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
  {
    if (i % 2 != 0)  // check if i is odd
    {
      sum = sum + i; // add only odd numbers
    }
  }

  printf("The sum of odd numbers from 1 to %d is %d\n", num, sum);
  return 0;
}

```
### OUTPUT

```
Enter the number: 10
The sum of odd numbers from 1 to 10 is 25
```

## 💻 Program: Sum Of Even And Odd Numbers

**📔 Problem**: Write a program to calculate the sum of all **even** & **odd** numbers from 1 to 100.

**💡 Solution**: [View Code](sum_of_even_odd.c)

```c
#include <stdio.h>
int main()
{

  int even_sum = 0, odd_sum = 0;

  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      even_sum = even_sum + i;
    }
    else
    {
      odd_sum = odd_sum + i;
    }
  }
  printf("The even sum is %d.\n", even_sum);
  printf("The odd sum is %d.\n", odd_sum);

  return 0;
}

```
### OUTPUT

```
The even sum is 2550.
The odd sum is 2500.
```

## 💻 Program: Check Prime Number

**📔 Problem**: Write a program to check whether a given number is a prime number or not.

**💡 Solution**: [View Code](prime_number.c)

```c
#include <stdio.h>

int main()
{
  int n, isPrime = 1;

  printf("Enter the number: ");
  scanf("%d", &n);

  // Prime numbers are greater than 1
  if (n <= 1)
  {
    isPrime = 0;
  }
  else
  {
    for (int i = 2; i < n; i++)
    {
      if (n % i == 0)
      {
        isPrime = 0; // Found a divisor, not prime
        break;
      }
    }
  }

  if (isPrime)
  {
    printf("%d is a Prime Number.\n", n);
  }
  else
  {
    printf("%d is not a Prime Number.\n", n);
  }

  return 0;
}

```
### OUTPUT

```
Enter the number: 7
7 is a Prime Number.
```
```
Enter the number: 10
10 is not a Prime Number.
```

## 💻 Program: Check Perfect Number

**📔 Problem**: Write a program to find weather the given number is perfect number or not.

**💡 Solution**: [View Code](perfect_number.c)

```c
#include <stdio.h>

int main()
{
  int num, remainder, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &num);

  // finding all divisors and adding them
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum = sum + i;
    }
  }

  // checking if the number is perfect
  if (sum == num)
  {
    printf("%d is a Perfect Number.\n", num);
  }
  else
  {
    printf("%d is Not a Perfect Number.\n", num);
  }

  return 0;
}

```
### OUTPUT

```
Enter the number: 6
6 is a Perfect Number.
```
```
Enter the number: 20
20 is Not a Perfect Number.
```

## 💻 Program: Check Perfect Number

**📔 Problem**: Write a program to find weather the given number is armstrong number or not.

**💡 Solution**: [View Code](armstrong_number.c)

```c
#include <stdio.h>

int main()
{
  int num, remainder, sum = 0;

  printf("Enter the number: ");
  scanf("%d", &num);

  // finding all divisors and adding them
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum = sum + i;
    }
  }

  // checking if the number is perfect
  if (sum == num)
  {
    printf("%d is a Perfect Number.\n", num);
  }
  else
  {
    printf("%d is Not a Perfect Number.\n", num);
  }

  return 0;
}

```
### OUTPUT

```
Enter the number: 153
The number 153 is a Armstrong number.
```
```
Enter the number: 123
The number 123 is  not a Armstrong number.
```

## 💻 Program: Find Greatest Common Divisor

**📔 Problem**: Write a program to find the greatest common divisor of two given numbers.

**💡 Solution**: [View Code](greatest_common_divisor.c)

```c
#include <stdio.h>

int main()
{
    int num1, num2, i, gcd;

    printf("Enter The First Number: ");
    scanf("%d", &num1);
    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("The Greatest Common Divisor Of %d And %d Is : %d", num1, num2, gcd);

    return 0;
}

```
### OUTPUT

```
Enter The First Number: 12
Enter The Second Number: 18
The Greatest Common Divisor of 12 and 18 is: 6
```
```
Enter The First Number: 36
Enter The Second Number: 60
The Greatest Common Divisor of 36 and 60 is: 12
```