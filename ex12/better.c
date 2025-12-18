#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

int *build(int n)
{
    int *tab = malloc(n * sizeof(int));

    if (!tab)
        return NULL;
    for (int idx = 0; idx < n; idx++)
        tab[idx] = idx;
    return tab;
}

void show(int *tab, int n)
{
    for (int idx = 0; idx < n; idx++)
        printf("%d ", tab[idx]);
    printf("\n");
}

int main()
{
    int tab_size = 5;
    int *tab = build(tab_size);

    if (!tab)
        return EXIT_ERROR;
    show(tab, tab_size);
    free(tab);
    return EXIT_SUCCESS;
}

