#include<stdio.h>
#include<stdbool.h>

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

void bubbleSort(int arr[], int n)
{
  for(int i = n - 2; i >= 0; i--)
  {
    bool swapped = false;

    for(int j = 0; j <= i; j++)
    {
      if(arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        swapped = true;
      }
    }

    if(!swapped)
    {
      break;
    }
  }
}

void printArray(int arr[], int n)
{
  printf("After Bubble Sort: ");
  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int arr[1000], n;

  inputArray(arr, &n);
  bubbleSort(arr, n);
  printArray(arr, n);

  return 0;
}