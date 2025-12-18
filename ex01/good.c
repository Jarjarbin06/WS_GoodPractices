#include <stdio.h>

/* Function name starts with a verb and uses lowerCamelCase. [web:11][web:14] */
int computeSum(int firstValue, int secondValue)
{
    /* Use English names and avoid mixing languages. [web:14] */
    int result = firstValue + secondValue;
    return result;

    // or

    // return firstValue + secondValue;
}

int main(void)
{
    int first = 5;
    int second = 7;
    int sum = 0;

    /* Call function with clear naming. */
    sum = computeSum(first, second);
    printf("Result: %d\n", sum);
    return 0;
}

