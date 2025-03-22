// 05- Insert an element at a specified position
#include <stdio.h>
int main()
{
     int i, size, position, insitem;
     int a[] = {-22, 2, 5, 3, 1, 9, 13};
     size = sizeof(a) / sizeof(a[0]);
     int temp[size + 1];

     printf("Enter element to be inserted: ");
     scanf("%d", &insitem);
     printf("Enter position for an element to be inserted: ");
     scanf("%d", &position);
     position = position - 1;
     for (i = 0; i <= size; i++)
     {
          if (i < position)
               temp[i] = a[i];
          if (i > position)
               temp[i] = a[i - 1];
          if (i == position)
               temp[i] = insitem;
     }
     printf("Array after inserting %d\n", insitem);
     for (i = 0; i <= size; i++)
          printf("%d\t", temp[i]);
}
