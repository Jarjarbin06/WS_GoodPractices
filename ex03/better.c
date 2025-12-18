#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static int mult2(int n)
{
    return (n * 2);
}

int main()
{
    int x = 3;
    int y = mult2(x);

    printf("%d\n", y);
    return EXIT_SUCCESS;
}
