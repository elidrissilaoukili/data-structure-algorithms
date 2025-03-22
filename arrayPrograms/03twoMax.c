// 03-	Find two first maximum numbers
#include <stdio.h>
int main()
{
     int i, size, max, max2, position = 0;
     int a[] = {-22, 2, 5, 3, 1, 9, 13};
     size = sizeof(a) / sizeof(a[0]);
     int temp[size - 1];
     max = a[0];

     // find first max number
     for (i = 0; i < size; i++)
     {
          if (a[i] > max)
          {
               max = a[i];
               position = i;
          }
     }

     // deleting first maximum number in array
     for (i = 0; i < size - 1; i++)
     {
          if (i < position)
               temp[i] = a[i];
          if (i >= position)
               temp[i] = a[i + 1];
     }

     max2 = temp[0];
     // finding second max in the remaining elements
     for (i = 0; i < size - 1; i++)
     {
          if (temp[i] > max2)
               max2 = temp[i];
     }
     printf("The fisrt largest number is %d\n", max);
     printf("The second largest number is %d\n", max2);
}
