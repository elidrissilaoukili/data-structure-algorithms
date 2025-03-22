#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int size, i;

    size = 5;

    // Dynamically allocate memory using calloc()
    ptr = (int *)calloc(size, sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL)
    {
        printf("Memory doesn't allocated!\n");
        exit(0);
    }
    else
    {
        printf("Memory has been successfully allocated by calloc().\n");
        // Get the elements
        for (i = 0; i < size; i++)
            ptr[i] = i * 10 + 100;

        printf("The elements of the array are:\n");
        for (i = 0; i < size; i++)
            printf("%d\t", ptr[i]);

        // Get new size for the array
        size = 10;
        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, size * sizeof(int));

        // Memory has been successfully allocated
        printf("\nMemory successfully re-allocated using realloc.\n");
        // Get the new elements of the array
        for (i = 5; i < size; ++i)
            ptr[i] = i + 9;

        // Print the elements of the array
        printf("The elements of the array are: \n");
        for (i = 0; i < size; ++i)
            printf("%d, ", ptr[i]);

        free(ptr);

        // Print the elements of the array
        printf("\n\nAfte free() The elements of the array are: \n");
        for (i = 0; i < size; ++i)
            printf("%d, ", ptr[i]);
    }

    return 0;
}