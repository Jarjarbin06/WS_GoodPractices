#include <stdio.h>
#include <stdlib.h>

static int *allocate_int_array(size_t size)
{
    int *array = malloc(size * sizeof(int));
    if (array == NULL) {
        return NULL;
    }
    return array;
}

static int *resize_int_array(int *array, size_t new_size)
{
    int *resized = realloc(array, new_size * sizeof(int));
    if (resized == NULL) {
        /* Caller is still responsible for freeing the original pointer. */
        return NULL;
    }
    return resized;
}

static void fill_int_range(int *array, int start_index, int end_index)
{
    for (int i = start_index; i < end_index; i++) {
        array[i] = i;
    }
}

static void print_int_array(const int *array, size_t size)
{
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    int *numbers = allocate_int_array(3);
    if (numbers == NULL) {
        return 1;
    }

    fill_int_range(numbers, 0, 3);

    int *resized = resize_int_array(numbers, 6);
    if (resized == NULL) {
        free(numbers);
        return 1;
    }
    numbers = resized;

    fill_int_range(numbers, 3, 6);
    print_int_array(numbers, 6);

    free(numbers);
    return 0;
}
