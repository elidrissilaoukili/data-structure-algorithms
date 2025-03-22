#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void insertion_recursion(int array[], int size);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     insertion_recursion(array, size);
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

void insertion_recursion(int array[], int size)
{
     int i, j, last;
     if (size <= 1)
          return;

     insertion_recursion(array, size - 1);
     last = array[size - 1];
     j = size - 2;
     while (j >= 0 && array[j] > last)
     {
          array[j + 1] = array[j];
          j--;
     }
     array[j + 1] = last;
}



// ELIDRSSI LAOUKILI
// Video explination: https://youtu.be/0f9u9-ODERk