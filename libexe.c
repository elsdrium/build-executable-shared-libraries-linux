#include <stdio.h>
#include <stdlib.h>

#include "libexe.h"

void foo(void)
{
    printf("libexe: foo\n");
}

int main(int argc, char *argv[])
{
    int i;
    printf("libexe: main\n");
    foo();

    printf("Command line: ");
    for (i=0; i<argc; ++i) {
        printf("%s ", argv[i]);
    }
    printf("\n\n");

    return 0;
}
