#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void odd_even_sort(int array[], int size);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     odd_even_sort(array, size);
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

void odd_even_sort(int array[], int size)
{
     int i, j, flag, temp;
     do
     {
          flag = 0;
          // even sorting
          for (i = 0; i < size - 1; i += 2)
          {
               if (array[i] > array[i + 1])
               {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    flag = 1;
               }
          }

          // odd sorting
          for (i = 1; i < size - 1; i += 2)
          {
               if (array[i] > array[i + 1])
               {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    flag = 1;
               }
          }

     } while (flag == 1);
}




// ELIDRSSI LAOUKILI
// Video explination: https://youtu.be/0f9u9-ODERk