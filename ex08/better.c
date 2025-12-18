#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static void get_square(int *result, int x)
{
    if (!result)
        return;
    *result = x ^ (2);
}

int main()
{
    int n = 5;
    int result = 0;

    get_square(&result, n);
    printf("%d\n", result);
    return EXIT_SUCCESS;
}

