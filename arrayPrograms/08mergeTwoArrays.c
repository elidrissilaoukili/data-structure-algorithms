// 08- Merge two arrays in sorted order

#include <stdio.h>
int main()
{
     int i, size1, size2, size, j = 0, temp;
     int a1[] = {1, 2, 3, 4};
     size1 = sizeof(a1) / sizeof(a1[0]);

     int a2[] = {5, 6, 7, 8};
     size2 = sizeof(a2) / sizeof(a2[0]);

     size = size1 + size2;
     int a3[size];

     // merging
     for (i = 0; i < size1; i++)
     {
          a3[j] = a1[i];
          j++;
     }
     for (i = 0; i < size2; i++)
     {
          a3[j] = a2[i];
          j++;
     }
     printf("\nArray after merging\n");
     for (i = 0; i < size; i++)
          printf("%d\t", a3[i]);

     return 0;
}
