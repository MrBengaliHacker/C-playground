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

## 💻 Program: Divisible by 5 or Not

**📔 Problem**: Write a program to check whether a given positive integer is divisible by 5 or not.

**💡 Solution**: [View Code](divisible_by_5.c)

```c
#include <stdio.h>

#include <stdio.h>

int main() {
    int x;
    
    printf("Enter a positive integer:");
    scanf("%d",&x);
    if(x%5==0){
        printf("%d is divisible by 5.\n", x);
    }
    else{
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