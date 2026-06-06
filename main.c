#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (op == '+')
        printf("Result = %.2f\n", num1 + num2);
    else if (op == '-')
        printf("Result = %.2f\n", num1 - num2);
    else if (op == '*')
        printf("Result = %.2f\n", num1 * num2);
    else if (op == '/') {
        if (num2 != 0)
            printf("Result = %.2f\n", num1 / num2);
        else
            printf("Error: Division by zero is not allowed.\n");
    }
    else
        printf("Invalid operator.\n");

    return 0;
}
