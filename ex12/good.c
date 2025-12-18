#include <stdio.h>
#include <stdlib.h>

/* Allocate and initialize an array, checking bounds and errors. [web:8][web:24] */
static int *allocateIntBuffer(const int size)
{
    int *buffer = NULL;
    int index = 0;

    if (size <= 0) {
        return NULL;
    }

    buffer = malloc((size_t)size * sizeof(int));
    if (buffer == NULL) {
        return NULL;
    }

    /* Loop must stop at size - 1 to avoid out-of-bounds writes. [web:8][web:22] */
    for (index = 0; index < size; index++) {
        buffer[index] = index;
    }
    return buffer;
}

/* This function only displays data; it must not free it. [web:21] */
static void displayBuffer(const int *buffer, const int size)
{
    int index = 0;

    if (buffer == NULL || size <= 0) {
        return;
    }

    for (index = 0; index < size; index++) {
        printf("%d ", buffer[index]);
    }
    printf("\n");
}

int main(void)
{
    int *values = allocateIntBuffer(5);

    if (values == NULL) {
        return 1;
    }

    displayBuffer(values, 5);

    /* Free memory exactly once, in the owner function. [web:15][web:24] */
    free(values);
    return 0;
}

