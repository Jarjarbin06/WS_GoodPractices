#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static int addition(int a, int b)
{
    int result = a + b;

    return result;
}

int main(void)
{
    int x = 5;
    int y = 7;
    int r = 0;

    r = addition(x, y);
    printf("Result: %d\n", r);
    return EXIT_SUCCESS;
}
