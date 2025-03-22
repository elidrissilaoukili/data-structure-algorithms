// 09-	Union & intersection of the given array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void display(int array[], int size);
void unions(int array1[], int array2[], int size1, int size2);
void intersection(int array1[], int array2[], int size1, int size2);

int main()
{
     int size1, size2;

     int array1[] = {1, 2, 3, 4, 5};
     int array2[] = {1, 2, 3, 6, 7, 8, 9, 10};
     size1 = sizeof(array1) / sizeof(array1[0]);
     size2 = sizeof(array2) / sizeof(array2[0]);
     printf("array1:\t");
     display(array1, size1);
     printf("array2:\t");
     display(array2, size2);
     intersection(array1, array2, size1, size2);
     printf("\n");
     unions(array1, array2, size1, size2);

     return 0;
}

void display(int array[], int size)
{
     for (int i = 0; i < size; i++)
          printf("%d, ", array[i]);
     printf("\n");
}

void intersection(int array1[], int array2[], int size1, int size2)
{
     printf("Inters:\t");
     for (int i = 0; i < size1; i++)
          for (int j = 0; j < size2; j++)
               if (array1[i] == array2[j])
                    printf("%d, ", array1[i]);
}

void unions(int array1[], int array2[], int size1, int size2)
{
     int i, j, k, size, count = 0;
     size = size1 + size2;
     int array[size];
     // merge
     for (i = 0; i < size1; i++)
     {
          array[count] = array1[i];
          count++;
     }
     for (i = 0; i < size2; i++)
     {
          array[count] = array2[i];
          count++;
     }

     // remove repeated elements
     for (i = 0; i < size - 1; i++)
     {
          for (j = i + 1; j < size;)
          {
               if (array[i] == array[j])
               {
                    for (k = j; k < size; k++)
                    {
                         if (k < j)
                              array[k] = array[k];
                         if (k >= j)
                              array[k] = array[k + 1];
                    }
                    size--;
               }
               else
                    j++;
          }
     }

     printf("Unions:\t");
     display(array, size);
}