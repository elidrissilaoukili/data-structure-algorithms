#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pointer, *pointer1;
    int size, i;

    size = 5;

    // Dynamically allocated the memory using malloc()
    pointer = (int *)malloc(size * sizeof(int));

    // Dynamically allocated the memory using calloc()
    pointer1 = (int *)calloc(size, sizeof(int));

    // check if the memory has been creaeted
    if (pointer == NULL || pointer1 == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }

    else
    {
        printf("Memory successfully allocated using malloc.\n");
        free(pointer);
        printf("Malloc memory successfully freed.\n");

        printf("\nMemory successfully allocated using calloc.\n");
        // Free the memory
        free(pointer1);
        printf("Calloc Memory successfully freed.\n");
    }

    return 0;
}