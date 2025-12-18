#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

int get_average(int *tab, int last_idx)
{
    int sum = 0;

    if (last_idx == 0)
        return (0);
    for (int idx = 0; idx < last_idx; idx++)
        sum += tab[idx];
    return (sum / last_idx);
}

int main()
{
    int tab[4] = {10, 20, 30, 40};
    int tab_average = get_average(tab, 4);

    printf("Average = %d\n", tab_average);
    return EXIT_SUCCESS;
}

