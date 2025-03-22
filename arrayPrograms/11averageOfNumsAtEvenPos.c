// 11- Average of numbers at even position
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
     int i, size, sum = 0;
     int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     size = sizeof(array) / sizeof(array[0]);
     for (i = 0; i < size; i++)
     {
          if ((i + 1) % 2 == 0)
               sum += array[i];
     }
     printf("Sum = %d\n", sum);
     printf("Average = %d\n", sum / 2);

     return 0;
}