#include <stdio.h>

// Simulated memory address using variables
unsigned char memory_location = 0xAB; // Simulated memory initialized with some data
unsigned char register_data = 0x00;   // Simulated register initialized to 0

int main() {
    // Print initial values
    printf("Initial State:\n");
    printf("Memory Location: 0x%X\n", memory_location);
    printf("Register: 0x%X\n", register_data);

    // Transfer data from memory to register
    register_data = memory_location;
    printf("\nAfter Loading Memory to Register:\n");
    printf("Register: 0x%X\n", register_data);

    // Modify register data
    register_data = 0x55;

    // Transfer data back from register to memory
    memory_location = register_data;
    printf("\nAfter Storing Register to Memory:\n");
    printf("Memory Location: 0x%X\n", memory_location);

    return 0;
}
