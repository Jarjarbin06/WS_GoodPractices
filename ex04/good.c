#include <stdio.h>
#include <stdlib.h>

/* Function name starts with a verb and describes the action. [web:11] */
/* Check malloc result and avoid memory leaks. [web:15][web:24] */
static int *allocateIntArray(int size)
{
    int *array = NULL;
    int index = 0;

    if (size <= 0) {
        return NULL;
    }

    array = malloc((size_t)size * sizeof(int));
    if (array == NULL) {
        return NULL;
    }

    for (index = 0; index < size; index++) {
        array[index] = index;
    }
    return array;
}

int main(void)
{
    int *values = NULL;
    int count = 5;
    int index = 0;

    values = allocateSequentialArray(count);
    if (values == NULL) {
        /* Handle allocation error. [web:24] */
        return 1;
    }

    for (index = 0; index < count; index++) {
        printf("%d ", values[index]);
    }
    printf("\n");

    /* Free allocated memory to avoid leaks (Valgrind). [web:19][web:22] */
    if (values != NULL) {
        free(values);
        values = NULL;
    }
    return 0;
}

