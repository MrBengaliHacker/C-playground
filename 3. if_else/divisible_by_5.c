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
