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