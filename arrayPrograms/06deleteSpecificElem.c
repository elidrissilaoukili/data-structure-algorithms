// 06- Delete a specified element
#include <stdio.h>
int main()
{
     int i, size, position, delitem, flag = 0;
     int a[] = {-22, 2, 5, 3, 1, 9, 13};
     size = sizeof(a) / sizeof(a[0]);
     int temp[size - 1];

     for (i = 0; i < size; i++)
          printf("%d\t", a[i]);

     printf("\nEnter element to be deleted: ");
     scanf("%d", &delitem);
     for (i = 0; i < size; i++) // find position of a number
     {
          if (a[i] == delitem)
          {
               position = i;
               flag = 1;
          }
     }
     if (flag == 1)
     {
          for (i = 0; i < size - 1; i++) // deleting number in array
          {
               if (i < position)
                    temp[i] = a[i];
               if (i >= position)
                    temp[i] = a[i + 1];
          }
          printf("Array after deleting %d\n", delitem);
          for (i = 0; i < size - 1; i++)
               printf("%d\t", temp[i]);
     }
     else
          printf("Number not found in array\n");
}
