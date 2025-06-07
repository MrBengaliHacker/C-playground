## 📋Exercise 1: Hello World

**Question**: Write a C program to print "Hello World".

**Solution**: [View Code](hello_world.c)

```c
#include <stdio.h>
int main() {
    printf("Hello World");
    return 0;
}
```
### OUTPUT

```
hello world
```

## 📋Exercise 2: Escape Sequences

**Question**: Write a C program to print text on multiple lines using the newline escape sequence (\n).

**Solution**: [View Code](escape_sequences.c)

```c
# include <stdio.h>
int main() {
    printf("Hi\n");
    printf("I am learning C programming.\n");
    printf("It's fun!\n");
    return 0;
}
```
### OUTPUT

```
Hi
I am learning C programming.
It's fun!
```

## 📋Exercise : Sum Numbers

**Question**: Write a C program print the sum of two numbers.

**Solution**: [View Code](sum_numbers.c)

```c
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter The Value Of A B : ");
    scanf("%d%d", &a, &b);
    printf("Sum Of The Given Numbers = %d", a + b);
    return 0;
}
```
### OUTPUT

```
Enter The Value Of A B : 2 9
Sum Of The Given Numbers = 11
```
