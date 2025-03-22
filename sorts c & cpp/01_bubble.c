#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void bubbleSort(int array[], int size);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     bubbleSort(array, size);
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

void swap(int array[], int i, int j)
{
     int temp = array[i];
     array[i] = array[j];
     array[j] = temp;
}

void bubbleSort(int array[], int size)
{
     int i, j;
     for (i = 0; i < size - 1; i++)
          for (j = i + 1; j < size; j++)
               if (array[i] > array[j])
                    swap(array, i, j);
}
