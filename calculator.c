#include <stdio.h>

// Function prototypes
void add(float num1, float num2);
void subtract(float num1, float num2);
void multiply(float num1, float num2);
void divide(float num1, float num2);

int main() {
    float num1, num2;
    int choice;

    // Menu for calculator
    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Getting input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform the operation based on user choice
    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
    }

    return 0;
}

// Function to add two numbers
void add(float num1, float num2) {
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
}

// Function to subtract two numbers
void subtract(float num1, float num2) {
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}

// Function to multiply two numbers
void multiply(float num1, float num2) {
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
}

// Function to divide two numbers
void divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    }
}
