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