#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static int *create_tab(int size)
{
    int *tab = malloc(size * sizeof(int));

    if (!tab)
        return NULL;
    for (int idx = 0; idx < size; idx++)
        tab[idx] = idx;
    return tab;
}

int main()
{
    int tab_size = 3;
    int *tab = create_tab(tab_size);

    if (!tab)
        return EXIT_ERROR;
    tab = realloc(tab, 6 * sizeof(int));
    if (!tab)
        return EXIT_ERROR;
    for (int idx = 0; idx < 6; idx++)
        printf("%d ", tab[idx]);
    printf("\n");
    free(tab);
    return EXIT_SUCCESS;
}

