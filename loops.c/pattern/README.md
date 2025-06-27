## 💻 Program: Right-Angled Triangle Star Pattern

**📔 Problem**: Write a C program to print the following pattern:
*
**
***
****

**💡 Solution**: [View Code](star_triangle.c)

```c

#include <stdio.h>
int main()
{
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

```
### OUTPUT

```
*
**
***
****
```
