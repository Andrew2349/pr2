#include <stdio.h>
#include <stdint.h>


void print_binary_bitwise(uint64_t num, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%lu", (num >> i) & 1);  
        if (i % 4 == 0) {  
            printf(" ");
        }
    }
    printf("\n");
}


void print_binary_table(uint64_t num, int bits) {
    const char *table[] = {
        "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", 
        "1010", "1011", "1100", "1101", "1110", "1111"
    };
    
    for (int i = bits - 1; i >= 0; i -= 4) {
        uint64_t n = (num >> i) & 0xF;
        printf("%s ", table[n]);
    }
    printf("\n");
}


void print_ascii_binary(const char *str) {
    while (*str) {
        print_binary_bitwise((uint64_t)(*str), 8);  
        str++;
    }
}

int main() {
    uint64_t num8 = 0xAF;    
    uint64_t num16 = 0x1ABF; 
    uint64_t num32 = 0x12345678; 
    uint64_t num64 = 0x123456789ABCDEF0;
    
    printf("8-bit (битові операції):\n");
    print_binary_bitwise(num8, 8);
    
    printf("16-bit (битові операції):\n");
    print_binary_bitwise(num16, 16);
    
    printf("32-bit (битові операції):\n");
    print_binary_bitwise(num32, 32);
    
    printf("64-bit (битові операції):\n");
    print_binary_bitwise(num64, 64);
    
    printf("\n8-bit (табличний метод):\n");
    print_binary_table(num8, 8);
    
    printf("16-bit (табличний метод):\n");
    print_binary_table(num16, 16);
    
    printf("32-bit (табличний метод):\n");
    print_binary_table(num32, 32);
    
    printf("64-bit (табличний метод):\n");
    print_binary_table(num64, 64);
    
    printf("\nКонвертація тексту у двійковий код ASCII:\n");
    print_ascii_binary("Hello");

    return 0;
}

