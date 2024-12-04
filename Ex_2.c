#include <stdio.h>

int main() {
    // Simulated registers (using variables)
    unsigned char register1 = 0xAB;  // Initialize Register 1 with some data
    unsigned char register2 = 0x00;  // Initialize Register 2 (empty)

    // Print initial values
    printf("Before Transfer:\n");
    printf("Register 1: 0x%X\n", register1);
    printf("Register 2: 0x%X\n", register2);

    // Data transfer: Copy data from Register 1 to Register 2
    register2 = register1;

    // Print values after transfer
    printf("\nAfter Transfer:\n");
    printf("Register 1: 0x%X\n", register1);
    printf("Register 2: 0x%X\n", register2);

    return 0;
}
