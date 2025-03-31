#include <stdio.h>


const char* binary_table[256] = {
    "00000000", "00000001", "00000010", "00000011", "00000100", "00000101", "00000110", "00000111",
    "00001000", "00001001", "00001010", "00001011", "00001100", "00001101", "00001110", "00001111",
    
};


void print_binary(unsigned long long number, int bits) {
    if (bits == 8) {
        printf("%s\n", binary_table[number & 0xFF]);
    }
    else if (bits == 16) {
        printf("%s\n", binary_table[number & 0xFFFF]);
    }
    else if (bits == 32) {
        printf("%s\n", binary_table[number & 0xFFFFFFFF]);
    }
    else if (bits == 64) {
        printf("%s\n", binary_table[number & 0xFFFFFFFFFFFFFFFF]);
    }
}

int main() {
    unsigned char num8 = 255;
    unsigned short num16 = 65535;
    unsigned int num32 = 4294967295;
    unsigned long long num64 = 18446744073709551615ULL;

    printf("8-bit (табличний метод): ");
    print_binary(num8, 8);
    
    printf("16-bit (табличний метод): ");
    print_binary(num16, 16);
    
    printf("32-bit (табличний метод): ");
    print_binary(num32, 32);
    
    printf("64-bit (табличний метод): ");
    print_binary(num64, 64);

    return 0;
}

