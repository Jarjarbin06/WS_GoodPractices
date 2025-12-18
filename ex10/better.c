#include <stdio.h>

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

static void write_log(char *filename, char *msg)
{
    FILE *file = fopen(filename, "a");

    if (!file)
        return;
    fprintf(file, "%s\n", msg);
    fclose(file);
}

int main()
{
    char *path = "log.txt";
    char *data = "hello";

    write_log(path, data);
    return EXIT_SUCCESS;
}

