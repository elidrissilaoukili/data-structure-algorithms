#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void selection_sort(int array[], int size);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     selection_sort(array, size);
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

void selection_sort(int array[], int size)
{
     int i, j, min, temp;
     for (i = 0; i < size - 1; i++)
     {
          min = i;
          for (j = i + 1; j < size; j++)
               if (array[min] > array[j])
                    min = j;
          if (min != i)
          {
               temp = array[i];
               array[i] = array[min];
               array[min] = temp;
          }
     }
}



// ELIDRSSI LAOUKILI
// Video explination: https://youtu.be/0f9u9-ODERk