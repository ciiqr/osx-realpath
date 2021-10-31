#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("usage: osx-realpath <path>\n", argc);
        return 1;
    }

    const char *symlinkPath = argv[1];
    char actualPath[PATH_MAX + 1];

    // print realpath
    realpath(symlinkPath, actualPath);
    printf("%s\n", actualPath);

    return 0;
}
