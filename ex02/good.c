#include <stdio.h>

/* Parameter is not modified, so use const char *. [web:12] */
int getStringLength(const char *text)
{
    int index = 0;

    while (text[index] != '\0') {
        index++;
    }
    return index;
}

int main(void)
{
    /* String literal must be pointed by const char *. [web:7] */
    const char *message = "hello";
    int length = getStringLength(message);

    printf("len = %d\n", length);
    return 0;
}

