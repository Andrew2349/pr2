#include <stdio.h>
#include <stdlib.h>

int globalVar;
int initializedVar = 42;

void test() {

    int localArr[1000];
    int localArr2[1000];
    int localArr3[1000];

    printf("Стек після збільшення: %p\n", &localArr);
}

int main() {
    int localVar;
    int *heapVar = (int *)malloc(sizeof(int));

    printf("Стек: %p\n", &localVar);
    printf("Купа: %p\n", heapVar);
    printf("BSS: %p\n", &globalVar);
    printf("DATA: %p\n", &initializedVar);

    test();

    free(heapVar);
    return 0;
}

