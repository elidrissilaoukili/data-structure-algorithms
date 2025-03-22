#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void bubble_recursion(int array[], int size);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     bubble_recursion(array, size);
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

void swap(int array[], int j)
{
     int temp = array[j];
     array[j] = array[j + 1];
     array[j + 1] = temp;
}

void bubble_recursion(int array[], int size)
{
     int i, j;
     if (size >= 0)
     {
          for (j = 0; j < size - 1; j++)
          {
               if (array[j] > array[j + 1])
                    swap(array, j);
          }
          return bubble_recursion(array, size - 1);
     }
}


// ELIDRSSI LAOUKILI
// Video explination: https://youtu.be/0f9u9-ODERk