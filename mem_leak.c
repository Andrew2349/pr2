#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    while (1) {
        int *leak = (int *)malloc(sizeof(int) * 1000);
        printf("Memory leaked\n");
        sleep(1);
    }
    return 0;
}

