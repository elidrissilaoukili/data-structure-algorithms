#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, size, i;
    printf("Enter size: ");
    scanf("%d", &size);

    // Dynamically allocate memory using calloc()
    arr = (int *)calloc(size, sizeof(int));

    // check if the memory has been successfully allocated
    // by calloc or not
    if (arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    else
    {
        printf("Memory successfully alloacated.\n");
        // Get elements
        for (i = 0; i < size; i++)
            arr[i] = i * 10 + 10;

        // Display elements
        printf("The elements of the array are:\n ");
        for (i = 0; i < size; i++)
            printf("%d\t", arr[i]);
    }

    return 0;
}