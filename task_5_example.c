#include <stdio.h>

void function1() {
    printf("Inside function1\n");
}

void function2() {
    printf("Inside function2\n");
    function1();
}

int main() {
    printf("Start\n");
    function2();
    printf("End\n");
    return 0;
}

