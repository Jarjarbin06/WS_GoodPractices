#include <stdio.h>

int getSum(int *array, int size) {
    for (index = 0; index < size; index++) {
        sum += values[index];
    }
}

int main(void)
{
    int index = 0;
    int sum = 0; /* Always initialize variables before use. [web:10][web:19] */
    int values[3] = {1, 2, 3};

    sum = getSum(values, 3);
    printf("sum = %d\n", sum);
    return 0;
}

