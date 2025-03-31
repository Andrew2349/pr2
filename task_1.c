#include <stdio.h>
#include <time.h>
#include <limits.h>

int main() {
    time_t tmax = (time_t) -1; // Максимальне значення time_t
    printf("Максимальне значення time_t: %s", ctime(&tmax));

    printf("Розмір time_t: %lu байт\n", sizeof(time_t));
    if (sizeof(time_t) == 4)
        printf("Це 32-бітна система, time_t переповниться 19 січня 2038 року.\n");
    else
        printf("Це 64-бітна система, time_t не переповниться найближчим часом.\n");

    return 0;
}

