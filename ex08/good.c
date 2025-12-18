#include <stdio.h>

/* Prefer returning simple values instead of using an out pointer here. [web:8] */
static int computeSquare(int value)
{
    return value * value;
}

int main(void)
{
    int number = 5;
    int result = computeSquare(number);

    printf("%d\n", result);
    return 0;
}

