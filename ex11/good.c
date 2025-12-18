#include <stdio.h>
#include <stdlib.h>

/* Allocate on heap and let the caller free it. [web:21][web:24] */
char *createGreetingMessage(const char *name)
{
    char *buffer = NULL;
    int written = 0;
    int size = 0;

    if (name == NULL) {
        return NULL;
    }

    /* Compute required size including terminator. */
    written = snprintf(NULL, 0, "Hello %s", name);
    if (written < 0) {
        return NULL;
    }
    size = written + 1;

    buffer = malloc((size_t)size);
    if (buffer == NULL) {
        return NULL;
    }

    snprintf(buffer, (size_t)size, "Hello %s", name);
    return buffer;
}

int main(void)
{
    char *message = createGreetingMessage("world");

    if (message == NULL) {
        return 1;
    }
    printf("%s\n", message);

    /* Caller is responsible for freeing the returned buffer. [web:24] */
    free(message);
    return 0;
}

