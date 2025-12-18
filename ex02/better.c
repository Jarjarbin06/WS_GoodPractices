#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static int length(char *string)
{
    int idx = 0;

    while (string[idx] != '\0')
        idx++;
    return idx;
}

int main()
{
    char *message = "hello";

    int len = length(message);
    printf("len = %d\n", len);
    return 0;
}
