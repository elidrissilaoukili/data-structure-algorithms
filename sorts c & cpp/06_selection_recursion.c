#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void selection_recursion(int array[], int start, int size);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     selection_recursion(array, 0, size);
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

void selection_recursion(int array[], int start, int size)
{
     int i, j, location, temp;
     if (start >= size)
          return;
     location = start;

     for (i = start + 1; i < size; i++)
          if (array[location] > array[i])
               location = i;

     if (location != start)
     {
          temp = array[start];
          array[start] = array[location];
          array[location] = temp;
     }

     return selection_recursion(array, start + 1, size);
}



// ELIDRSSI LAOUKILI
// Video explination: https://youtu.be/0f9u9-ODERk