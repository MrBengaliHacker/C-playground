## 💻 Program: Even or Odd Number

**📔 Problem**: Write a program to check whether a given positive integer is even or odd.

**💡 Solution**: [View Code](even_or_odd.c)

```c
#include <stdio.h>

int main() {
    int x;
    
    printf("Enter a positive integer:");
    scanf("%d",&x);
    if(x%2==0){
        printf("%d is Even.\n", x);
    }
    else{
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