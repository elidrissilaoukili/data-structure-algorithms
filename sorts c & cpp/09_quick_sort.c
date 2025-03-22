#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void quick_sort(int array[], int low, int high);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     quick_sort(array, 0, size - 1);
     printf("\nArray after sorting:\n");
     display(array, size);
     idri();
     return 0;
}

void display(int array[], int size)
{
     for (int i = 0; i < size; i++)
          printf("%d, ", array[i]);
}

void swap(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
}

int partition(int array[], int low, int high)
{
     int pivot = array[high];
     int i = low - 1;
     for (int j = low; j < high; j++)
     {
          if (array[j] <= pivot)
          {
               i++;
               swap(&array[i], &array[j]);
          }
     }
     swap(&array[i + 1], &array[high]);
     return (i + 1);
}

void quick_sort(int array[], int low, int high)
{
     if (low < high)
     {
          int pi = partition(array, low, high);
          quick_sort(array, low, pi - 1);
          quick_sort(array, pi + 1, high);
     }
}



// ELIDRSSI LAOUKILI
// Video explination: https://youtu.be/0f9u9-ODERk