#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Display menu
    printf("===== SIMPLE CALCULATOR =====\n");
    printf("Operations:\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n\n");

    // Read operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Read numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform calculation
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nResult = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("\nResult = %.2f\n", result);
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("\nResult = %.2f\n", result);
            } else {
                printf("\nError! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("\nInvalid operator!\n");
    }

    return 0;
}