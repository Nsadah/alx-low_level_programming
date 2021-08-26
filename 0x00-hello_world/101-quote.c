#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

#define RED "\e[0;31m"
#define NC "\e[0m"


int main(){

    if (argc != 2) {
        fwrite("[ERROR] : No string argument provided!\n", 39, 1, stderr);
        exit(EXIT_FAILURE);
    }

    char *str = malloc(strlen(argv[1]) + 1);
    strcpy(str, argv[1]);

    printf("str: %s\n", str);

    free(str);
    exit(EXIT_SUCCESS);
}
