// 07- Remove repeated elements
#include <stdio.h>
void removerep(int position, int a[], int size);
int main()
{
     int i, j, size, k, position;
     int a[] = {1, 2, 2, 3, 1, 9, 1};
     size = sizeof(a) / sizeof(a[0]);
     for (i = 0; i < size; i++)
     {
          for (j = i + 1; j < size;)
          {
               if (a[i] == a[j])
               {
                    removerep(j, a, size);
                    size--;
               }
               else
                    j++;
          }
     }
     printf("After removing repeated elements\n");
     for (i = 0; i < size; i++)
          printf("%d\t", a[i]);
}
void removerep(int position, int a[], int size)
{
     int i;
     for (i = 0; i < size; i++) // deleting repeated number in array
     {
          if (i < position)
               a[i] = a[i];
          if (i >= position)
               a[i] = a[i + 1];
     }
}
/*
/// Method II :
// 07- Remove repeated elements
#include <stdio.h>
int main()
{
     int i, j, k, size, count = 0, position;
     int a[] = {-22, 2, 5, 3, 1, 9, 13};
     size = sizeof(a) / sizeof(a[0]);
     int *temp = a;
     for (i = 0; i < size; i++)
     {
          for (j = i + 1; j < size;)
          {
               if (a[i] == a[j])
               {
                    for (k = j; k < size; k++)
                         a[k] = a[k + 1];
                    size--;
               }
               else
                    j++;
          }
     }
     printf("After removing repeated elements\n");
     for (i = 0; i < size; i++)
          printf("%d\n", a[i]);
}
*/