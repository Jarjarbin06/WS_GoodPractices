#include <stdio.h>

/* This function is only used in this file, mark it static. [web:8] */
/* Start functions name with a verb */
static int computeDouble(int value)
{
    return value * 2;
}

int main(void)
{
    int input = 3;
    int result = computeDouble(input);

    printf("%d\n", result);
    return 0;
}

