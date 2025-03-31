#include <stdio.h>

void test() {
    int local_arr[1000];
    printf("Stack array at %p\n", local_arr);
}

int main() {
    test();
    return 0;
}
