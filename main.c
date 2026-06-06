#include <stdio.h>

int main() {
    float num3, num4;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num3);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num4);

    if (op == '+')
        printf("Result = %.2f\n", num3 + num4);
    else if (op == '-')
        printf("Result = %.2f\n", num3 - num4);
    else if (op == '*')
        printf("Result = %.2f\n", num3 * num4);
    else if (op == '/') {
        if (num4 != 0)
            printf("Result = %.2f\n", num3 / num4 );
        else
            printf("Error: Division by zero is not allowed.\n");
    }
    else
        printf("Invalid operator.\n");

    return 0;
}
