// 10-	Sum of two numbers equal to X, X integer given
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x, size;
     int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     size = sizeof(array) / sizeof(array[0]);
     printf("Enter number: ");
     scanf("%d", &x);

     for (int i = 0; i < size - 1; i++)
          for (int j = i + 1; j < size; j++)
               if (array[i] + array[j] == x)
                    printf("%d + %d = %d\n", array[i], array[j], x);

     return 0;
}