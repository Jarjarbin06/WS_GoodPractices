#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static int get_sum(const int *tab)
{
    int sum = 0;

    if (!tab)
        return (0);
    for (int idx = 0; idx < 3; idx++)
        sum += tab[idx];
    return (sum);
}

int main()
{
    int tab[3] = {1, 2, 3};
    int sum = get_sum(tab);

    printf("sum = %d\n", sum);
    return EXIT_SUCCESS;
}

