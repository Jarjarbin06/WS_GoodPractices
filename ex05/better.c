#include <stdio.h>

void print_first(int *array)
{
    printf("first = %d\n", array[0]);
}

int main()
{
    int a[3] = {1, 2, 3};
    int *p = a;

    print_first(p);
    return 0;
}
