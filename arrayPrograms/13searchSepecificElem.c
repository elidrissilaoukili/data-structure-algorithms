// 13-	Search for a specific element
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i, x, size, found = 0;
     int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     size = sizeof(array) / sizeof(array[0]);

     for (i = 0; i < size; i++)
          printf("%d, ", array[i]);

     printf("\nFind: ");
     scanf("%d", &x);

     for (i = 0; i < size; i++)
          if (x == array[i])
               printf("%d found at position %d\n", x, i);

     return 0;
}