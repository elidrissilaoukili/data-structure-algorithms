// 02- Max & Min of given numbers
#include <stdio.h>

int main()
{
     int array[] = {-22, -17, 2, 5, 3, 4, 6, 8, 7, 1, 9, 13};
     int size = sizeof(array) / sizeof(array[0]);
     int i;
     int min = array[0];
     int max = array[0];

     for (i = 0; i < size; i++)
     {
          if (min > array[i])
               min = array[i];
          if (max < array[i])
               max = array[i];
     }

     printf("Minimum: %d\n", min);
     printf("Maximum: %d\n", max);

     return 0;
}