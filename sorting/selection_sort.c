#include<stdio.h>

void inputArray(int arr[], int *n)
{
  printf("Enter the array size: ");
  scanf("%d", n);

  printf("Enter the array elements: ");
  for(int i = 0; i < *n; i++)
  {
    scanf("%d", &arr[i]);
  }
}

void selectionSort(int arr[], int n)
{
  for(int i = 0; i < n - 1; i++)
  {
    int index = i;

    for(int j = i + 1; j < n; j++)
    {
      if(arr[j] < arr[index])
      {
        index = j;
      }
    }

    int temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
  }
}

void printArray(int arr[], int n)
{
  printf("After Selection Sort: ");

  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int n, arr[1000];

  inputArray(arr, &n);
  selectionSort(arr, n);
  printArray(arr, n);

  return 0;
}