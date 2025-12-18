#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static char *make_message(const char *name)
{
    char *buffer = malloc(sizeof(char) * (strlen("Hello ") + strlen(name) + 1));

    if (!buffer)
        return NULL;
    sprintf(buffer, "Hello %s", name);
    return buffer;
}

int main()
{
    char *message = make_message("world");

    if (!message)
        return EXIT_ERROR;
    printf("%s\n", message);
    free(message);
    return EXIT_SUCCESS;
}

