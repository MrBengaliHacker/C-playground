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
