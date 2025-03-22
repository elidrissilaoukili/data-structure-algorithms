// 12-	Array elements in reverse order using swapping
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, k, size, temp;
     int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     size = sizeof(array) / sizeof(array[0]);

     printf("Before reverse: ");
     for (i = 0; i < size; i++)
          printf("%d, ", array[i]);

     for (k = size; k >= 0; k--)
     {
          for (i = 0; i < k - 1; i++)
          {
               temp = array[i];
               array[i] = array[i + 1];
               array[i + 1] = temp;
          }
     }
     printf("\nAfter reverse : ");
     for (i = 0; i < size; i++)
          printf("%d, ", array[i]);

     return 0;
}