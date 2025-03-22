// 01- Find sum of negative and positive integers
#include <stdio.h>

int main()
{
     int array[] = {-22, -17, 2, 5, 3, 4, 6, 8, 7, 1, 9};
     int size = sizeof(array) / sizeof(array[0]);
     int i, negs = 0, pos = 0;
     for (i = 0; i < size; i++)
     {
          if (array[i] < 0)
               negs += array[i];
          if (array[i] > 0)
               pos += array[i];
     }

     printf("Sum of negatives: %d\n", negs);
     printf("Sum of positives: %d\n", pos);

     return 0;
}