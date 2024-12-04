#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int and_operation(int a, int b);
int or_operation(int a, int b);
int xor_operation(int a, int b);
int not_operation(int a);

int main() {
    int choice, a, b, result;

    while (1) {
        // Display menu
        printf("\nALU Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. AND Operation\n");
        printf("6. OR Operation\n");
        printf("7. XOR Operation\n");
        printf("8. NOT Operation\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform selected operation
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = add(a, b);
                printf("Result: %d\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = subtract(a, b);
                printf("Result: %d\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = multiply(a, b);
                printf("Result: %d\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                if (b != 0) {
                    result = divide(a, b);
                    printf("Result: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = and_operation(a, b);
                printf("Result: %d\n", result);
                break;
            case 6:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = or_operation(a, b);
                printf("Result: %d\n", result);
                break;
            case 7:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = xor_operation(a, b);
                printf("Result: %d\n", result);
                break;
            case 8:
                printf("Enter a number: ");
                scanf("%d", &a);
                result = not_operation(a);
                printf("Result: %d\n", result);
                break;
            case 9:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int and_operation(int a, int b) {
    return a & b;
}

int or_operation(int a, int b) {
    return a | b;
}

int xor_operation(int a, int b) {
    return a ^ b;
}

int not_operation(int a) {
    return ~a;
}
