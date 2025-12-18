#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static void print_first(int *array)
{
    printf("first = %d\n", array[0]);
}

int main()
{
    int a[3] = {1, 2, 3};
    int *p = a;

    print_first(p);
    return EXIT_SUCCESS;
}
