#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array, size, i;

    printf("Enter size: ");
    scanf("%d", &size);

    array = (int *)malloc(size * sizeof(int));

    // check if the memory created or not
    if (array == NULL)
    {
        printf("The creation failed!\n");
        printf("The memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory created succsseful with malloc().\n");
        // get the elements
        for (i = 0; i < size; i++)
        {
            array[i] = i + 1;
        }
    }

    // display elements
    for (i = 0; i < size; i++)
        printf("%d\t", array[i]);

    return 0;
}