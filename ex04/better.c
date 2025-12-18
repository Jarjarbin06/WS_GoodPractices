#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

int *create_tab(int size)
{
    int *tab = NULL;
    int idx = 0;

    tab = malloc(size * sizeof(int));
    for (idx = 0; idx < size; idx++) {
        tab[idx] = idx;
    }
    return tab;
}

int main()
{
    int *tab = NULL;
    int n = 5;
    int idx = 0;

    tab = create_tab(n);
    for (idx = 0; idx < n; idx++) {
        printf("%d ", tab[idx]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

