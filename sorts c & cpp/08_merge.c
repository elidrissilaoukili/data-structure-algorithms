#include <stdio.h>
#include <stdlib.h>
#include "idrilib.h"

void display(int array[], int size);
void merge_sort(int array[], int l, int r);

int main()
{
     int array[] = {1, 5, -6, -1, 18, 45, 2, 2, 3, 4, 19};
     int size = sizeof(array) / sizeof(array[0]);

     printf("\nArray before sorting:\n");
     display(array, size);
     merge_sort(array, 0, size - 1);
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

void merge(int array[], int l, int m, int r)
{
     int i, j, k;
     int n1 = m - l + 1;
     int n2 = r - m;

     // create temp arrays
     int L[n1], R[n2];

     // copy data to temp arrays L[n1], R[n2]
     for (i = 0; i < n1; i++)
          L[i] = array[l + i];
     for (j = 0; j < n2; j++)
          R[j] = array[m + 1 + j];

     /* Merge the temp arrays back into array[l..r] */
     i = 0; // Initial index of first subarray
     j = 0; // Initial index of second subarray
     k = l; // Initial index of merge subarray

     while (i < n1 && j < n2)
     {
          if (L[i] <= R[j])
          {
               array[k] = L[i];
               i++;
          }
          else
          {
               array[k] = R[j];
               j++;
          }
          k++;
     }

     /* Copy the remaining elements of L[], if there are any */
     while (i < n1)
     {
          array[k] = L[i];
          i++;
          k++;
     }
     /* Copy the remaining elements of R[], if there are any */
     while (j < n2)
     {
          array[k] = R[j];
          j++;
          k++;
     }
}

void merge_sort(int array[], int l, int r)
{
     if (l < r)
     {
          int m = l + (r - l) / 2;

          merge_sort(array, l, m);
          merge_sort(array, m + 1, r);

          merge(array, l, m, r);
     }
}



// ELIDRSSI LAOUKILI
// Video explination: https://youtu.be/0f9u9-ODERk