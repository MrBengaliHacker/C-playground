## 💻 Program: Even or Odd Number

**📔 Problem**: Write a program to check whether a given positive integer is even or odd.

**💡 Solution**: [View Code](even_or_odd.c)

```c
int main()
{
    int x;

    printf("Enter a positive integer:");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("%d is Even.\n", x);
    }
    else
    {
        printf("%d is Odd.\n", x);
    }

    return 0;
}

```
### OUTPUT

```
Enter a positive integer:5
5 is Odd.
```

## 💻 Program: Divisible by 5 or Not

**📔 Problem**: Write a program to check whether a given positive integer is divisible by 5 or not.

**💡 Solution**: [View Code](divisible_by_5.c)

```c
#include <stdio.h>

int main()
{
    int x;

    printf("Enter a positive integer:");
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        printf("%d is divisible by 5.\n", x);
    }
    else
    {
        printf("%d is not divisible by 5.\n", x);
    }

    return 0;
}

```
### OUTPUT

```
Enter a positive integer:15
15 is divisible by 5.
```

## 💻 Program: Leap Year Checker

**📔 Problem**: Write a program to check whether a given year is a leap year or not.

**💡 Solution**: [View Code](leap_year.c)

```c
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Year:");
    scanf("%d", &n);

    if (n % 400 == 0)
    {
        printf("%d is a leap year.\n", n);
    }
    else if (n % 100 == 0)
    {
        printf("%d is not a leap year.\n", n);
    }
    else if (n % 4 == 0)
    {
        printf("%d is leap year.\n", n);
    }
    else
    {
        printf("%d is not a leap year.\n", n);
    }
    return 0;
}

```
### OUTPUT

```
Enter the Year:2024
2024 is leap year.
```

## 💻 Program: Area vs Perimeter of Rectangle

**📔 Problem**: Write a program to check whether the area of a rectangle is greater than its perimeter, given its length and breadth.

**💡 Solution**: [View Code](area_perimeter.c)

```c
#include <stdio.h>

int main()
{
    int length, breadth, area, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%d", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Compare area and perimeter
    if (area > perimeter)
    {
        printf("Area (%d) is greater than Perimeter (%d).\n", area, perimeter);
    }
    else if (area < perimeter)
    {
        printf("Area (%d) is less than Perimeter (%d).\n", area, perimeter);
    }
    else
    {
        printf("Area (%d) is equal to Perimeter (%d).\n", area, perimeter);
    }

    return 0;
}

```
### OUTPUT

```
Enter length of the rectangle: 10
Enter breadth of the rectangle: 5
Area (50) is greater than Perimeter (30).
```

## 💻 Program: Check for Three-Digit Number

**📔 Problem**: Write a C program to check whether the entered positive integer is a three-digit number or not.

**💡 Solution**: [View Code](three_digit_number.c)

```c
#include <stdio.h>

int main()
{
  int x;
  printf("Enter a positive integer:");
  scanf("%d", &x);
  
  if (x > 99 && x < 1000)
  {
    printf("%d is a three digit number.\n", x);
  }
  else
  {
    printf("%d is not a three digit number.\n", x);
  }

  return 0;
}

```
### OUTPUT

```
Enter a positive integer:16
16 is not a three digit number.
```
```
Enter a positive integer:108
108 is a three digit number.
```

## 💻 Program: Check if a Number is Positive, Negative, or Zero

**📔 Problem**: Write a C program to check whether a given number is positive, negative, or zero.

**💡 Solution**: [View Code](positive_negative_zero.c)

```c
#include <stdio.h>

int main()
{
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("The number %d is positive.\n", num);
  }
  else if (num < 0)
  {
    printf("The number %d is negative.\n", num);
  }
  else
  {
    printf("The number is zero.\n");
  }
  return 0;
}

```
### OUTPUT

```
Enter the number: 16
The number 16 is positive.
```
```
Enter the number: -5
The number -5 is negative.
```
```
Enter the number: 0
The number is zero.
```

## 💻 Program: Find the Greatest of Three Numbers

**📔 Problem**: Write a C program to take three integers as input and print the greatest among them.

**💡 Solution**: [View Code](greatest_of_three.c)

```c
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter the First number: ");
    scanf("%d", &num1);
    printf("Enter the Second number: ");
    scanf("%d", &num2);
    printf("Enter the Third number: ");
    scanf("%d", &num3);
    
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is Greatest.\n", num1);
        }
        else
        {
            printf("%d is Greatest.\n", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is Greatest.\n", num2);
        }
        else
        {
            printf("%d is Greatest.\n", num3);
        }
    }

    return 0;
}


```
### OUTPUT

```
Enter the First number: 5
Enter the Second number: 9
Enter the Third number: 2
9 is Greatest.
```

## 💻 Program: Grade Evaluation Based on Marks

**📔 Problem**: Write a C program to input a student's marks (0–100) and print their grade based on the following criteria:

| Marks Range | Grade               |
|-------------|---------------------|
| 91–100      | A (Excellent)       |
| 76–90       | B (Very Good)       |
| 61–75       | C (Good)            |
| 31–60       | D (Needs Improvement) |
| 0–30        | F (Fail)            |

If the entered marks are invalid (less than 0 or greater than 100), the program should display an appropriate message.

**💡 Solution**: [View Code](grade_calculation.c)

```c
#include <stdio.h>
int main()
{
  int num;
  printf("Enter Your number:");
  scanf("%d", &num);

  if (num < 0 || num > 100)
  {
    printf("Invalid marks entered.\n");
  }
  else if (num > 90)
  {
    printf("You got Grade A (Excellent).\n");
  }
  else if (num > 75)
  {
    printf("You got Grade B (Very Good).\n");
  }
  else if (num > 60)
  {
    printf("You got Grade C (Good).\n");
  }
  else if (num > 30)
  {
    printf("You got Grade D (Needs Improvement).\n");
  }
  else
  {
    printf("You got Grade F (Fail).\n");
  }
  return 0;
}

```
### OUTPUT

```
Enter Your number:88
You got Grade B (Very Good).
```
## 💻 Program: Grade Evaluation Based on Marks

**📔 Problem**: Write a program to calculate the commission for the sales person on the basis of following :

• Sales < 5000 Commission = 5% Of Sales
• Sales > 5000 And Sales < 10000 Commission = 10% Of Sales
• Sales > 10000 And Sales < 20000 Commission = 15% Of Sales
• Sales > 20000 Commission = 20% Of Sales

**💡 Solution**: [View Code](Sales_Commission.c)

```c
#include <stdio.h>
int main()
{

  float sales, commission;

  printf("Enter The Sales Amount : ");
  scanf("%f", &sales);

  if (sales <= 5000)
  {
    commission = sales * 0.05;
    printf("The Commission is : %f", commission);
  }
  else if (sales > 5000 && sales <= 10000)
  {
    commission = sales * 0.10;
    printf("The Commission is : %f", commission);
  }
  else if (sales > 10000 && sales <= 20000)
  {
    commission = sales * 0.15;
    printf("The Commission is : %f", commission);
  }
  else if (sales > 20000)
  {
    commission = sales * 0.20;
    printf("The Commission is : %f", commission);
  }
  else
  {
    printf("No commission defined for this sales amount.");
  }

  return 0;
}

```
### OUTPUT

```
Enter The Sales Amount : 8000
The Commission is : 800.000000
```