#include <stdio.h>

/* Use const for read-only strings and check fopen result. [web:15] */
static void appendLogLine(const char *fileName, const char *message)
{
    FILE *file = fopen(fileName, "a");

    if (file == NULL) {
        /* Handle failure to open file. */
        return;
    }
    if (message == NULL) {
        fclose(file);
        return;
    }
    fprintf(file, "%s\n", message);
    fclose(file);
}

int main(void)
{
    appendLogLine("log.txt", "hello");
    return 0;
}

