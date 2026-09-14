//
// Created by adavidoaiei on 15.09.2026.
//
#include <stdio.h>

int main(void)
{
    char command[256];

    while (1) {
        printf("myshell> ");

        fgets(command, sizeof(command), stdin);

        printf("Ai introdus: %s", command);
    }

    return 0;
}