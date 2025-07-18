## 💻 Program: Right-Angled Triangle Star Pattern

**📔 Problem**: Write a program to print the following pattern:
```
*
**
***
****
```
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
## 💻 Program: Reverse Right-Angled Triangle Star Pattern

**📔 Problem**: Write a program to print the following pattern:
```
****
***
**
*
```
**💡 Solution**: [View Code](rotate_star_triangle.c)

```c

#include <stdio.h>
int main()
{

  for (int i = 4; i >= 1; i--)
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
****
***
**
*
```
## 💻 Program: Centered Pyramid Star Pattern

**📔 Problem**: Write a program to print the following pattern:
```
   *
  ***
 *****
```
**💡 Solution**: [View Code](pyramid_star_triangle.c)

```c

#include <stdio.h>
int main()
{

  for (int i = 4; i >= 1; i--)
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
  ***
 *****
```


