/*Gabriel Hernandez
Lab 7 - There was an error with my github  that the lab 7 file got corrupt hence this is a replacement.
*/

#include <stdio.h>

void swap(int *xP, int *yP);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);
int main()
{
  int n = 9;
  int item[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

  printf("Array bofore sorting: \n");
  printArray(item, n);
  bubbleSort(item, n);
  printf("\nSorted array: \n");
  printArray(item, n);
  return 0;
}

void swap(int *xP, int *yP)
{
  int temp = *xP;
  *xP = *yP;
  *yP = temp;
}

void bubbleSort(int arr[], int n)
{
  int a, b, temp;
  for (a = 0; a < n - 1; a++)
  {
  printf("\nIteration# %d\n\n", a+1);
    
    for (b = 0; b < n-a-1; b++)
    {
      if (arr[b] > arr[b+1])
      {
        temp = arr[b];
        arr[b] = arr[b+1];
        arr[b+1] = temp;
      }
     printArray(arr, n);
    }
  }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
