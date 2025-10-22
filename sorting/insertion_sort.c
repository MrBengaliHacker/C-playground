#include <stdio.h>

void inputArray(int arr[], int *n)
{
  do
  {
    printf("Enter the array size (1 to 1000): ");
    scanf("%d", n);
  } while (*n < 1 || *n > 1000);

  printf("Enter array elements: ");
  for (int i = 0; i < *n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
      else
      {
        break;
      }
    }
  }
}

void printArray(int arr[], int n)
{
  printf("After Insertion Sort: ");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int arr[1000], n;

  inputArray(arr, &n);
  insertionSort(arr, n);
  printArray(arr, n);

  return 0;
}