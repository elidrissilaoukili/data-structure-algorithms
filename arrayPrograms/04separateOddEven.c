// 04- Separate Even, odd numbers
#include <stdio.h>
int main()
{
     int i, size;
     int a[] = {-22, 2, 5, 3, 1, 9, 13, 77, 88, 99, 16, 14, 24};
     size = sizeof(a) / sizeof(a[0]);

     printf("Even numbers are:\n");
     for (i = 0; i < size; i++)
          if (a[i] >= 0)
               if (a[i] % 2 == 0)
                    printf("%d\t", a[i]);

     printf("\nOdd numbers are:\n");
     for (i = 0; i < size; i++)
          if (a[i] >= 0)
               if (a[i] % 2 == 1)
                    printf("%d\t", a[i]);
}
