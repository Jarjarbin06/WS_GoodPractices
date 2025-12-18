#include <stdio.h>

/* Use English and start with a verb in the function name. [web:11][web:14] */
static int computeAverage(const int *values, int size)
{
    int index = 0;
    int sum = 0;

    if (values == NULL || size <= 0) {
        return 0;
    }

    for (index = 0; index < size; index++) {
        sum += values[index];
    }
    return sum / size;
}

int main(void)
{
    int samples[4] = {10, 20, 30, 40};
    int average = computeAverage(samples, 4);

    printf("average = %d\n", average);
    return 0;
}

