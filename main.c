#include <stdio.h>

int main() {
    /*char name[] = "John";
    printf("Hello %s", name);*/

    int a;

    printf("Introdu un numar: ");
    scanf("%d", &a);

    int* pointer = &a;

    printf("Valoare %d\n", *pointer);
    printf( "Adresa %p\n", pointer);
    return 0;
}